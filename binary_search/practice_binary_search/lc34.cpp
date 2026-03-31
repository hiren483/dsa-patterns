#include<iostream>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        int n = nums.size();

        int st = 0, end = n - 1;
        // ---------- First occurrence ----------
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] >= target) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        // check if target exists
        if (st == n || nums[st] != target) {
            return ans;
        }
        ans[0] = st;

        st = 0; 
        end = n - 1;
        // ---------- Last occurrence ----------
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] <= target) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        ans[1] = end;

        return ans;
    }
int main(){
  
}
 