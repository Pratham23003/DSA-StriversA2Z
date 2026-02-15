#include <iostream>
using namespace std;

int secondLargestNumber(int arr[], int n) {
    int largestNum = arr[0];
    int secondLargest = -1; //assuming array doesnt have -ve vals.

    for(int i = 0; i < n; i++){
        if(arr[i] > largestNum) {
            largestNum = arr[i];
        }
    }
    
    for(int i = 0; i < n; i++){
        if(arr[i] > secondLargest && arr[i]!=largestNum){
            secondLargest = arr[i];
        }
    }

    cout << "First Largest :" << largestNum << endl;
    cout << "Second Largest :" << secondLargest;
    
    return secondLargest;
}

int main() {

    // Calling the function
    int arr[] = {1,2,4,7,7,5};
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    int result = secondLargestNumber(arr, arrLength);
    return 0;
}