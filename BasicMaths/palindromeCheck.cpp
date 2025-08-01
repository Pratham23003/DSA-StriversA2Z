//121 reversed is 121 so it is a palindrome
//7789 reversed is 9877 which is not a palindrome
#include<iostream>
using namespace std;

int checkPalindrome(bool n){
    int lastDigit = 0;
    int revNum = 0;
    int ogNum = n;
    
    while(n > 0){
        lastDigit = n % 10;
        n = n / 10;
        revNum = (revNum * 10) + lastDigit;
    }

    if(revNum == ogNum){
        return true;
    }
    else return false;
}

int main(){
    int n;
    cout << "Enter a num :";
    cin >> n;

    int result = checkPalindrome(n);
    cout << result;
    
}
