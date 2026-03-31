#include<iostream>
using namespace std;
int maxx(vector<int>& nums){
    int maximum = 0; 
    for(int i = 0; i < nums.size() ; i++){
        maximum = max(maximum,nums[i]);
    }
    return maximum;
}

long long countSubarrays(vector<int>& nums, int k) {
        int l = 0; 
        int n = nums.size();
        int max_count = 0;
        int maximum = maxx(nums);
        long long count = 0;

        for(int r = 0; r < n ;r++){
            if(nums[r]==maximum){
                max_count++;
            }
            while (max_count >= k){
                if(nums[l] == maximum){
                    max_count-- ;
                }
                l++;
            }
            count += l;
            
        }
        return count ;
    }

int main(){
    
}
