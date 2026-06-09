class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(int i=0; i<students.size();i++){
            q.push(students[i]);
        }
        int curr =0;
        int failed=0;
        while(!q.empty()){
            if(sandwiches[curr]==q.front()){
                curr++;
                q.pop();
                failed=0;
            }
            else{
                int front = q.front();
                q.pop();
                q.push(front);
                failed++;
                if(failed==q.size()){
                    return q.size();
                }
            }
        }
        return 0;
    }
};