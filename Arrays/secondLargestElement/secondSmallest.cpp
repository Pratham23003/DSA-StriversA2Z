#include <iostream>
using namespace std;
int secondSmallest(int n, int arr[])
{
    int smallest = arr[0];
    int secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++){
        
        if (arr[i] < smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < secondSmallest){
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    int result = secondSmallest(n, arr);
    cout << result;
}
