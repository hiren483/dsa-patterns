class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int total_gas = 0;
        int total_gas_need = 0;
        for(int i=0;i<gas.size();i++){
            total_gas+= gas[i];
        }      
        for(int i=0;i<cost.size();i++){
            total_gas_need+= cost[i];
        }
        if(total_gas<total_gas_need){
            return -1;
        }
        int start = 0;
        int tank = 0;
        for(int i =0;i<n;i++){
            int gain = gas[i]-cost[i];
            tank+= gain;
            if(tank<0){
                start=i+1;
                tank=0;
            }
        }

        return start;
    }
};