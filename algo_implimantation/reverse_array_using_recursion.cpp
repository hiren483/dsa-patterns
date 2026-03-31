#include <iostream>
using namespace std;

/*
    Function: swap
    --------------
    Swaps two integers using pointers.

    Why pointers?
    - We want to modify the actual values in memory
    - Not just local copies
*/
void swap(int *l, int *r){
    int temp = *r;
    *r = *l;
    *l = temp;
}

/*
    Function: reverse
    -----------------
    Reverses an array using recursion.

    Parameters:
    - array[] : the array to be reversed
    - l       : left index
    - r       : right index

    Idea:
    - Swap first and last elements
    - Move l forward and r backward
    - Stop when l >= r
*/
void reverse(int array[], int l, int r){

    // Base case:
    // When left index crosses or meets right index
    // recursion should stop
    if(l >= r) return;

    // Swap current left and right elements
    swap(&array[l], &array[r]);

    // Recursive call on remaining sub-array
    reverse(array, l + 1, r - 1);
}

int main(){
    int array[4] = {1, 2, 3, 4};

    // Reverse the array
    reverse(array, 0, 3);

    // Print reversed array
    for(int i = 0; i < 4; i++){
        cout << array[i] << " ";
    }

    return 0;
}
