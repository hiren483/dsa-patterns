#include<iostream>
using namespace std;

// used to search in sorted array
int binary_search(int arr[], int target, int st , int end){
        if(st > end) return -1; 
        int mid = st + (end - st) / 2;
        if(arr[mid] < target){
            binary_search(arr,9 ,mid+1 , end);
        }
        else if(arr[mid] > target){
            binary_search(arr,9 ,st , mid-1);
        }
        else{
            return mid; // target found
        }
        return -1;
    
}

int main(){
    int arr1[] = {-1, 0, 3, 4, 5, 9, 12}; //odd size
    int arr2[] = { 0, 3, 4, 5, 9, 12}; //even size
    
    cout << binary_search(arr1, 9, 0 , 6)<<endl; //array , target , n
    cout << binary_search(arr2, 9, 0 , 5)<<endl; //array , target , n
}
 