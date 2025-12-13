#include <iostream>
#include <string>
using namespace std;

int tilingProblem(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    // vertical
    int ans1 = tilingProblem(n - 1);

    // Horizontal
    int ans2 = tilingProblem(n - 2);

    return ans1 + ans2;
}

void removeDuplicates(string str, string ans, int map[26], int i)
{
    if(i == str.size()){
        cout << "Ans: " << ans << endl;
        return;
    }
    char ch = str[i];
    int mapIdx = (int)(ch - 'a');

    if (map[mapIdx])
    { // Duplicates
        removeDuplicates(str, ans, map, i + 1);
    }
    else
    { // Not duplicates
        map[mapIdx] = true;
        removeDuplicates(str, ans + str[i], map, i + 1);
    }
}

int friendPairing(int n){
    if(n==1 || n==2){
        return n;
    }

    return friendPairing(n - 1) + (n - 1) * friendPairing(n - 2);
}

int main()
{
    cout << friendPairing(4);

    // int n = 3;
    // cout << tilingProblem(n);

    // string str = "appnnacollege";
    // string ans = " ";
    // int map[26] = {false};
    // int i = 0;

    // removeDuplicates(str, ans, map, i);
    return 0;
}