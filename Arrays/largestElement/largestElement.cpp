#include <iostream>
using namespace std;

// function definition
int largestNumber(int arr[], int n) {
    int largestNum = arr[0];
    
    for(int i = 0; i < n; i++){
        if(arr[i] > largestNum) {
            largestNum = arr[i];
        }
    }
    cout << largestNum;
    return largestNum;
}

int main() {

    // Calling the function
    int arr[] = {1,2,3,4,5};
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    int result = largestNumber(arr, arrLength);
    return 0;
}