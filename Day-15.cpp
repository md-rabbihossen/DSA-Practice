#include<iostream>
#include<vector>

using namespace std;

void printSum(int arr[], int n, int target){
    int currentSum = 0;
    int start = 0;
    int end = n - 1;

    while (start<end){
        currentSum = arr[start] + arr[end];
        if (currentSum==target){
            cout << start << "," << end;
            break;
        }else if(currentSum>target){
            end--;
        }else{
            start++;
        }
    }
}

int main(){
    // vector<int> vec1;
    // cout << vec1.size();

    int arr[4] = {2, 7, 11, 15};
    int n = 4;
    int target = 9;

    printSum(arr, n, target);
    return 0;
}