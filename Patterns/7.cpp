/*
            *        
          * * *       
        * * * * *     
      * * * * * * *  
    * * * * * * * * *   
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a num :";
    cin >> n;

    for(int i = 0; i<n; i++){
        for(int j = 0; j < (n-i-1); j++){ //space
            cout << " ";
        }
        for(int k = 0; k < (2*i+1); k++){ //stars
            cout << "*";
        }

        cout << endl;
    }
}