class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i = 0; i < n l i++){
            for(int j = 0 ; j < n ; j++){
                pq.push(matrix[i][j]);
                if(pq.size()>k){
                    pq.pop();
                }
            }
        }
        return pq.top();
    }
};

//using binary search

class Solution {
public:

    int findsmallerthanmid(vector<vector<int>>& matrix,int mid){

        int n = matrix.size();

        int row = n-1;
        int col = 0;

        int count = 0;

        while(row>=0 && col<n){

            if(matrix[row][col] <= mid){

                count += row+1;
                col++;
            }
            else{
                row--;
            }
        }

        return count;
    }

    int kthSmallest(vector<vector<int>>& matrix, int k) {

        int n = matrix.size();

        int low = matrix[0][0];
        int high = matrix[n-1][n-1];

        while(low < high){

            int mid = low + (high-low)/2;

            int count = findsmallerthanmid(matrix,mid);

            if(count < k){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }

        return low;
    }
};