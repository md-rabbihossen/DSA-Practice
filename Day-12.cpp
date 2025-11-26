#include <iostream>
#include <string>
using namespace std;

// void numCounter(int mat[][3], int n, int m, int key)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (mat[i][j] == key)
//             {
//                 count++;
//             }
//         }
//     }
//     cout << "Number of 7's present this 2D Array is : " << count;
// }


void sum(int mat[][3], int n , int m){
    int sum = 0;

    for (int i = 1; i < 2; i++){
        for (int j = 0; j < m;j++){
            sum += mat[i][j];
        }
    }
    cout << "Sum of second row is : " << sum;
}
int main()
{
    // int mat[2][3] = {{4, 7, 8}, {8, 8, 7}};
    // int n = 2, m = 3;
    // int key = 7;
    // numCounter(mat, n, m, key);

    int nums[3][3] = {{1, 4, 9}, {11, 4, 3}, {2, 2, 3}};
    int n = 3, m = 3;

    sum(nums, n, m);
    return 0;
}