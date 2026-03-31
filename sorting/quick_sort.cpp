#include <iostream>
using namespace std;

/*
    Function: partition
    -------------------
    Places the pivot element at its correct position
    and rearranges elements such that:
    - elements < pivot are on the left
    - elements >= pivot are on the right

    This implementation uses Lomuto partition scheme.

    Parameters:
    - arr[] : array
    - st    : starting index
    - end   : ending index (pivot is chosen as arr[end])

    Returns:
    - index of pivot after partitioning
*/
int partition(int arr[], int st, int end){

    // Choose last element as pivot
    int pivot = arr[end];

    // idx keeps track of boundary of elements < pivot
    int idx = st - 1;

    // Traverse array from st to end-1
    for(int j = st; j < end; j++){

        // If current element is smaller than pivot
        if(arr[j] < pivot){
            idx++;                      // expand smaller-than-pivot region
            swap(arr[j], arr[idx]);     // move element to left side
        }
    }

    // Place pivot at its correct position
    idx++;
    swap(arr[idx], arr[end]);

    // Return pivot index
    return idx;
}

/*
    Function: quick_sort
    --------------------
    Sorts the array using Quick Sort algorithm.

    Idea:
    - Partition the array around a pivot
    - Recursively sort left and right subarrays

    Parameters:
    - arr[] : array to be sorted
    - st    : starting index
    - end   : ending index
*/
void quick_sort(int arr[], int st, int end){

    // Base condition
    if(st < end){

        // Partition array and get pivot index
        int pividx = partition(arr, st, end);

        // Recursively sort elements before pivot
        quick_sort(arr, st, pividx - 1);

        // Recursively sort elements after pivot
        quick_sort(arr, pividx + 1, end);
    }
}

int main(){

    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = 6;

    quick_sort(arr, 0, n - 1);

    // Print sorted array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}


// quick_sort(0,5)
//  ├─ pivot at 1
//  ├─ quick_sort(0,0)
//  └─ quick_sort(2,5)
//       ├─ pivot at 3
//       ├─ quick_sort(2,2)
//       └─ quick_sort(4,5)
