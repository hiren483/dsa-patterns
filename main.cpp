class Solution {
public:
    int maxArea(vector<int>& height) {
    int n = height.size();
    int l = 0;
    int r = n-1;
    int max_area=0;
    while(r>l){
        int area = min(height[l],height[r])*(r-l);
        int max_area=max(max_area,area);
        if(height[l]<height[r]){
            l++;
        }
        else{
            r--;
        }
    }
    return max_area;
    }
};