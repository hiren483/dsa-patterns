#include <iostream>
using namespace std;

/*
    Function: selection_sort
    ------------------------
    Sorts an array in ascending order using Selection Sort.

    Concept:
    - Divide the array into two parts:
        1. Sorted part (left)
        2. Unsorted part (right)
    - Repeatedly select the minimum element from
      the unsorted part and place it at the beginning.
*/
void selection_sort(int arr[], int n){

    // Loop through each position in the array
    // i represents the current position to be filled
    for(int i = 0; i < n; i++){

        // Assume the first element of unsorted part is minimum
        int minIndex = i;

        // Find index of minimum element in unsorted part
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        // Swap the found minimum element with element at index i
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    selection_sort(arr, n);

    // Print sorted array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
