#include<iostream>
using namespace std;

//Bit manipulation

// void isOddorEven(int num){
//     if(num & 1){
//         cout << num << " is odd" << endl;
//     } else {
//         cout << num << " is Even" << endl;
//     }
// }

// void getIthBit(int num, int i){

//     int mask = 1 << i;

//     if(num & mask){
//         cout << 1;
//     }else{
//         cout << 0;
//     }
// }

// int setIthBit(int num, int i){
//     int mask = 1 << i;
//     return (num | mask);
// }

// int clearIthBit(int num , int i){
//     int mask = ~(1 << i);
//     return (num & mask);
// }

// void clearIthBit(int num, int i){
//     int bitMask = ~(0) << i;
//     num = num & bitMask;
//     cout << num;
// }


void countSetBit(int num){
    int count = 0;
    
    while(num>0){
        int lastDig = num & 1;
        count += lastDig;

        num = num >> 1;
    }

    cout << count;
}
int main(){

    // isOddorEven(5);
    // isOddorEven(14);
    // getIthBit(6, 2);

    // cout<<setIthBit(6, 3);

    // cout << clearIthBit(6, 1);
    // clearIthBit(15, 2);

    countSetBit(7);
    return 0;
}