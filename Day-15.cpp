#include <iostream>
#include <vector>

using namespace std;

// void printSum(int arr[], int n, int target){
//     int currentSum = 0;
//     int start = 0;
//     int end = n - 1;

//     while (start<end){
//         currentSum = arr[start] + arr[end];
//         if (currentSum==target){
//             cout << start << "," << end;
//             break;
//         }else if(currentSum>target){
//             end--;
//         }else{
//             start++;
//         }
//     }
// }

vector<int> pairSum(vector<int> arr, int target)
{
    int str = 0, end = arr.size() - 1;
    int currSum = 0;
    vector<int> ans;

    while (str < end)
    {
        currSum = arr[str] + arr[end];
        if (currSum == target)
        {
            ans.push_back(str);
            ans.push_back(end);

            return ans;
        }
        else if (currSum > target)
        {
            end--;
        }
        else
        {
            str++;
        }
    }
    return ans;
}

int main()
{
    // vector<int> vec1;
    // cout << vec1.size();

    // int arr[4] = {2, 7, 11, 15};
    // int n = 4;
    // int target = 9;

    // printSum(arr, n, target);

    vector<int> vec = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = pairSum(vec, target);
    cout << ans[0] << "," << ans[1];
    return 0;
}