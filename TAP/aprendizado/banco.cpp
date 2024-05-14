#include <iostream>
#include <vector>

using namespace std;

void molotov(int value, vector<vector<int>> coins, vector<vector<vector<int>>> &dp, vector<int> adicionar, int original, vector<bool> &done){
    if(value < 0){
        return;
    }

    if(value == 0){
        dp[original].push_back(adicionar);
    }

    if(done[value] == true && dp[value].size() == 0){
        return;
    }

    if(dp[value].size() > 0){
        for(int c = 0; c < dp[value].size(); c++){
            bool ok = true;
            vector<int> nova;
            for(int d = 0; d < 6; d++){
                nova.push_back(adicionar[d] + dp[value][c][d]);
                if(nova[d] > coins[1][d]){
                    ok = false;
                    break;
                }
            }
            if(ok){
                dp[original].push_back(nova);
            }
        }
        return;
    }

    //int qtd = 0;

    for(int c = 0; c < coins[0].size(); c++){
        if(coins[1][c] > 0 && value - coins[0][c] >= 0){
            vector<vector<int>> nova1 = coins;
            vector<int> nova2 = adicionar;

            nova1[1][c]--;
            nova2[c]++;

            //adicionar[c]++;
            molotov(value - coins[0][c], nova1, dp, nova2, original, done)/* + 1*/;
        }
    }

    

    done[value] = true;

}

int solve(int value, vector<vector<int>> &coins, vector<vector<vector<int>>> &dp, vector<bool> &done){
    for(int c = 1; c <= value; c++){
        vector<int> nova(6, 0);
        molotov(c, coins, dp, nova, c, done);
    }
    return dp[value].size();
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>> coins(2, vector<int>(6));
    coins[0] = {2, 5, 10, 20, 50, 100};
    int n;
    cin >> n;
    vector<vector<vector<int>>> dp(n + 1);
    vector<bool> done(n + 1, false);
    for(int c = 0; c < 6; c++){
        cin >> coins[1][c];
    }

    cout << solve(n, coins, dp, done) << "\n";

    cout << 0 << "\n";

    return 0;
}