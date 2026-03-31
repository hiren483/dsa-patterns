#include<iostream>
#include<unoredered_set>

using namespace std;
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int best_count = 0;
        for(int i= 0 ; i<n-1 ; i++){
            if(nums[i]==1){
                count++;
                best_count = max(best_count , count);
            }
            else{
                count = 0; 
            }
        }
       return best_count;
    }

int main(){
    

}
