/*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a num :";
    cin >> n;

    for(int i = 0; i < n; i++){
        int bitFlip = 1;
        if(i % 2 == 0) bitFlip =1;
        else bitFlip = 0;
        for(int j = 0; j <= i; j++){
            cout << bitFlip << " ";
            bitFlip= 1- bitFlip;
        }
        cout << endl;
    }
}