//reversing a num
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a num :";
    cin >> n;

    int revNum = 0;
    int lastDigit = 0;
    while(n > 0){
        lastDigit = n % 10; //7789 % 10 = 9
        n = n / 10; // 7789/10 = 778
        revNum = (revNum * 10) + lastDigit; // (0 * 10) + 9 = 9;
    }
    cout << revNum;
}