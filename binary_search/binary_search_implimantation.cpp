#include<iostream>
using namespace std;

// used to search in sorted array
int binary_search(int arr[], int target, int n){
    int start = 0, end = n - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] < target){
            start = mid + 1;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            return mid; // target found
        }
    }
    return -1; // target not found
}

int main(){
    int arr1[] = {-1, 0, 3, 4, 5, 9, 12}; //odd size
    int arr2[] = { 0, 3, 4, 5, 9, 12}; //even size
    
    cout << binary_search(arr1, 9, 7)<<endl; //array , target , n
    cout << binary_search(arr2, 9, 6)<<endl; //array , target , n
}
