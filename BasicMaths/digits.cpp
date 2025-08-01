//extraction of digits
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a num :";
    cin >> n;

    int lastDigit = 0;
    while(n > 0){
        lastDigit = n % 10;
        n = n/10;
    }
    cout << n << endl;
    cout << lastDigit;
}