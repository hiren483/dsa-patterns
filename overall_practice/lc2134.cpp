#include<iostream>
using namespace std;

int minSwaps(vector<int>& nums) {
    int n = nums.size();

    // Count total number of 1s in the array
    int totalOnes = 0;
    for (int x : nums) {
        if (x == 1) totalOnes++;
    }

    // If there are 0 or 1 ones, no swaps are needed
    if (totalOnes <= 1) return 0;

    int maxOnesInWindow = 0;
    int currentOnes = 0;

    // Sliding window over a circular array
    for (int i = 0; i < n + totalOnes; i++) {
        // Add the new element to the window
        if (nums[i % n] == 1) {
            currentOnes++;
        }

        // Remove the element that goes out of the window
        if (i >= totalOnes) {
            if (nums[(i - totalOnes) % n] == 1) {
                currentOnes--;
            }
        }

        maxOnesInWindow = max(maxOnesInWindow, currentOnes);
    }

    // Minimum swaps = total 1s - maximum 1s already together
    return totalOnes - maxOnesInWindow;
}

int main(){
    
}
