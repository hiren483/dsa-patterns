#include <iostream>
using namespace std;

/*
    Function: bubble_sort
    ---------------------
    Sorts an array in ascending order using Bubble Sort.

    Concept:
    - Repeatedly compare adjacent elements.
    - If they are in the wrong order, swap them.
    - After each pass, the largest element moves
      ("bubbles") to the end of the array.
*/
void bubble_sort(int arr[], int n){

    // Outer loop controls number of passes
    // After each pass, the largest element of
    // the unsorted part is placed at correct position
    for(int i = n - 1; i >= 0; i--){

        // Inner loop compares adjacent elements
        // We only go till i-1 because last i elements
        // are already sorted
        for(int j = 0; j <= i - 1; j++){

            // If current element is greater than next element
            // swap them to maintain ascending order
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main(){
    int arr[] = {5, 1, 4, 2, 8};
    int n = 5;

    bubble_sort(arr, n);

    // Print sorted array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
