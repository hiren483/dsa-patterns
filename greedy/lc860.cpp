class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        vector<int> cashinhand(3,0);
        for(int i=0; i< n;i++){
            if(bills[i]==5){
                cashinhand[0]++;
            }
            if(bills[i]==10){
                cashinhand[1]++;
                if(cashinhand[0]==0){
                    return false;
                }
                cashinhand[0]--;
            }
            if(bills[i]==20){
                cashinhand[2]++;
                if(cashinhand[1]==0 && cashinhand[0]<3){
                    return false;
                }
                else if(cashinhand[1] >0 && cashinhand[0]>0){
                    cashinhand[1]--;
                    cashinhand[0]--;
                }
                else if(cashinhand[1]==0 && cashinhand[0]>=3){
                    cashinhand[0]-=3;
                }
                else{
                    return false;
                }
                
            }

        }
        return true;
    }
};