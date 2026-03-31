#include<iostream>
#include<unordered_map>
using namespace std;

int maxArea(vector<int>& height) {
        int l = 0 ,n = height.size() , r = n -1; 
        int windowarea = 0;
        int max_area = 0;
        while(l<r){
            windowarea = min(height[r],height[l])*(r - l);
            max_area = max(max_area , windowarea);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r++;
            }
        }
        return max_area ;
    }

int main(){
    

}
