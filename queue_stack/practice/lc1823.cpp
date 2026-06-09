class Solution {
public:
    int findTheWinner(int n, int k) {

        list<int> players;

        for(int i = 1; i <= n; i++) {
            players.push_back(i);
        }

        auto curr = players.begin();

        while(players.size() > 1) {

            for(int i = 1; i < k; i++) {

                curr++;

                if(curr == players.end()) {
                    curr = players.begin();
                }
            }

            curr = players.erase(curr);

            if(curr == players.end()) {
                curr = players.begin();
            }
        }

        return players.front();
    }
};


//josephus formula 

class Solution {
public:
    int findTheWinner(int n, int k) {

        int winner = 0;

        for(int i = 2; i <= n; i++) {
            winner = (winner + k) % i;
        }

        return winner + 1;
    }
};