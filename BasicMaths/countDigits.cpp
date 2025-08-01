// You are given an integer n. You need to return the number of digits in the number.
// The number will have no leading zeroes, except when the number is 0 itself.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a num :";
    cin >> n;

    int count = 0;
    int lastDigit = 0;
        while(n > 0){
            lastDigit = n % 10;
            n = n /10;
            count++;
        }
    cout << count;
}