#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    int l = 0, r = 1;

    while (l < n && r < n) {
        // l should have positive
        while (l < n && nums[l] > 0) l += 2;

        // r should have negative
        while (r < n && nums[r] < 0) r += 2;

        if (l < n && r < n) {
            swap(nums[l], nums[r]);
        }
    }
    return nums;
}


int main(){
    
}
