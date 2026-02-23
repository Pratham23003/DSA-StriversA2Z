#include<iostream>
using namespace std;
int isSorted(int size, int arr[]){
    for(int i = 1; i < size; i++){
        if(arr[i] >= arr[i-1]){}
        else return false;
    }
    return true;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int result = isSorted(size, arr);
    cout << result;
    
}