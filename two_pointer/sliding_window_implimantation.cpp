// SLIDING WINDOW (FIXED SIZE)
// Time: O(n)
// Space: O(1)

int maxSumSubarray(vector<int>& nums, int k) {
    int windowSum = 0;
    int maxSum = 0;

    for (int i = 0; i < nums.size(); i++) {

        windowSum += nums[i];  // add current element

        // window size becomes k
        if (i >= k - 1) {
            maxSum = max(maxSum, windowSum);

            // slide window → remove leftmost element
            windowSum -= nums[i - (k - 1)];
        }
    }

    return maxSum;
}
