/*
    * * * * * * * * *
      * * * * * * *  
        * * * * *    
          * * *      
            *         
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a num :";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){ //spaces
            cout << " ";
        }
        for(int k = 0; k < ((2*n)-((2*i)+1)); k++){ //stars
            cout << "*";
        }
        cout << endl;
    }
}