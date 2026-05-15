class Solution {
public:
    bool isValidSerialization(string preorder) {
        int slots = 1;   // root needs one slot

        stringstream ss(preorder);
        string token;

        while(getline(ss, token, ',')) {

            // every node uses one slot
            slots--;

            // no slot available -> invalid
            if(slots < 0) {
                return false;
            }

            // non-null node creates 2 new slots
            if(token != "#") {
                slots += 2;
            }
        }

        return slots == 0;
    }
};