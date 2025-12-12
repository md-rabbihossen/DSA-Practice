#include <iostream>
#include <string>

using namespace std;

// // int factorial (int n){
// //     if (n == 0){
// //         return 1;
// //     }

// //     return n *factorial(n - 1);
// // }

// int print(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }

//     cout << n << " ";
//     return print(n - 1);
// }

// int sum(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }

//     return n + sum(n - 1);
// }

// int fibonacci(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     else if (n == 1)
//     {
//         return 1;
//     }

//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// bool isSorted(int arr[], int n, int i)
// {
//     if (i == n - 1)
//     {
//         return true;
//     }
//     if (arr[i] > arr[i + 1])
//     {
//         return false;
//     }
//     return isSorted(arr, n, i + 1);
// }

// int firstOcc(int arr[], int n, int i, int target)
// {
//     if (n == i)
//     {
//         return -1;
//     }
//     if (target == arr[i])
//     {
//         return i;
//     }

//     return firstOcc(arr, n, i + 1, target);
// }

int lastOcc(int arr[], int n, int i, int target)
{
    if (i == -1)
    {
        return -1;
    }
    if(target == arr[i]){
        return i;
    }

    return lastOcc(arr, n, i - 1, target);
}

int product(int x, int n){
    if (n==1){
        return x;
    }
    return x * product(x, n - 1);
}

int main()
{
    // cout << factorial(5);
    // cout << print(5);

    // cout << sum(5);
    // cout <<fibonacci(4);

    int array[5] = {1, 2, 3, 3, 5};
    int n = sizeof(array) / sizeof(array[0]);
    int i = n - 1;
    int target = 3;
    // if (isSorted(array, n, i))
    // {
    //     cout << "Array is sorted";
    // }
    // else
    // {
    //     cout << "Array is not sorted";
    // }
    // cout << firstOcc(array, n, i, target);
    // cout<<lastOcc(array, n, i,target);
    cout << product(3, 3);
}