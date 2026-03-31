// TWO POINTER TECHNIQUE (2Sum - Sorted Array)
// Time: O(n)
// Space: O(1)

bool twoSumSorted(vector<int>& nums, int target) {
    int left = 0;                  // start pointer
    int right = nums.size() - 1;   // end pointer

    while (left < right) {

        int sum = nums[left] + nums[right];

        if (sum == target) {
            // pair found
            return true;
        }
        else if (sum < target) {
            // sum too small → increase it
            left++;
        }
        else {
            // sum too large → decrease it
            right--;
        }
    }

    return false; // no valid pair
}
