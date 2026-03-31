class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        vector<int> ans(nums2.size() , 0);
        vector<int> sub_ans;
        unordered_map<int,int> mp;
        for(int i = 0; i < nums2.size() ; i++){
            mp[nums2[i]] = i;
        }
        for(int i = nums2.size()-1 ; i>=0; i--){
            while(s.size()>0 && s.top() <=nums2[i]){
                s.pop();
            }
        
        if(s.empty()){
            ans[i]= -1;
        }
        else {
            ans[i] = s.top();
        }
        s.push(nums2[i]);

        }
        for(int i = 0 ; i < nums1.size() ; i++){
            sub_ans.push_back(ans[mp[nums1[i]]]);
        }
        return sub_ans;
    }
};