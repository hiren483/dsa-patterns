#include <iostream>
#include <vector>
using namespace std;

/*
    Function: merge
    ---------------
    Merges two sorted subarrays into one sorted array.

    Parameters:
    - arr[] : original array
    - st    : starting index of the array/subarray
    - mid   : ending index of left subarray
    - end   : ending index of right subarray

    Left subarray  -> arr[st ... mid]
    Right subarray -> arr[mid+1 ... end]

    Time Complexity: O(n) for merging
*/
void merge(int arr[], int st, int mid, int end) {

    // Temporary array to store merged result
    vector<int> temp;

    // Pointers for left and right subarrays
    int i = st;        // pointer for left subarray
    int j = mid + 1;   // pointer for right subarray

    // Compare elements from both subarrays
    // and push smaller one into temp
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Copy remaining elements of left subarray (if any)
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // Copy remaining elements of right subarray (if any)
    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy merged elements back to original array
    // temp[0] corresponds to arr[st]
    for (int idx = 0; idx < temp.size(); idx++) {
        arr[st + idx] = temp[idx];
    }
}

/*
    Function: merge_sort
    --------------------
    Recursively divides the array and sorts it using merge sort.

    Parameters:
    - arr[] : array to be sorted
    - st    : starting index
    - end   : ending index

    Idea:
    - Divide array into two halves
    - Recursively sort both halves
    - Merge the sorted halves
*/
void merge_sort(int arr[], int st, int end) {

    // Base condition:
    // When subarray has 1 or 0 elements, it is already sorted
    if (st >= end) return;

    // Find middle index safely
    int mid = st + (end - st) / 2;

    // Recursively sort left half
    merge_sort(arr, st, mid);

    // Recursively sort right half
    merge_sort(arr, mid + 1, end);

    // Merge the two sorted halves
    merge(arr, st, mid, end);
}

int main() {

    int arr[] = {12, 31, 35, 8, 30, 9};
    int n = 6;

    // Perform merge sort
    merge_sort(arr, 0, n - 1);

    // Print sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


// merge_sort(0,5)
//  ├─ merge_sort(0,2)
//  │   ├─ merge_sort(0,1)
//  │   │   ├─ merge_sort(0,0)
//  │   │   ├─ merge_sort(1,1)
//  │   │   └─ merge(0,0,1)
//  │   ├─ merge_sort(2,2)
//  │   └─ merge(0,1,2)
//  ├─ merge_sort(3,5)
//  │   ├─ merge_sort(3,4)
//  │   ├─ merge_sort(5,5)
//  │   └─ merge(3,4,5)
//  └─ merge(0,2,5)
