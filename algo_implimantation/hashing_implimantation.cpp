#include <iostream>
#include <unordered_map>
using namespace std;

/*
    Function: frequency
    -------------------
    Prints frequency of each element in the array using hashing.

    Idea:
    - Use a hash table (unordered_map)
    - Key   -> array element
    - Value -> number of times it appears
*/
void frequency(int arr[], int n){

    // Create an unordered_map
    // key   = element of array
    // value = frequency count
    unordered_map<int, int> mp;

    // Traverse the array
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;  
        // If key doesn't exist, it is created with value 0
        // Then incremented to 1
    }

    // Traverse the hash map to print frequencies
    for(auto x : mp){
        cout << x.first << " " << x.second << endl;
        // x.first  -> element
        // x.second -> frequency
    }
}

int main(){
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = 6;

    frequency(arr, n);

    return 0;
}
