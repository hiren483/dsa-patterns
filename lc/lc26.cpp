#include<iostream>
using namespace std;
   
void rotate(vector<int>& nums, int k) {
        //brute force
        vector<int> lastkdigit;
        int n = nums.size();
        if(nums.size()==1){return;}
        if(k>n){
            k = k%n;
        }
        for(int i=0; i<k; i++){
            lastkdigit.push_back(nums[n+i-k]);
        }
        for(int i=0; i<k ; i++){
            nums.pop_back();
        }
        for(int i=0; i<k; i++){
            nums.insert(nums.begin(),lastkdigit[k-i-1]);
        }
        //optimal
        //         class Solution {
        // public:
        //     void rotate(vector<int>& nums, int k) {
        //         int n = nums.size();
        //         k %= n;          

        //         reverse(nums.begin(), nums.end());
        //         reverse(nums.begin(), nums.begin() + k);
        //         reverse(nums.begin() + k, nums.end());
        //     }
        // };
    }

int main(){
    
}
