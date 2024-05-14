#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    vector<vector<int>> coins(2, vector<int>(6));
    cin >> n;
    for(int c = 0; c < 6; c++){
        cin >> coins[1][c];
    }
    vector<int> dp(n + 1, 0);
    coins[0] = {2, 5, 10, 20, 50, 100};
    dp[0] = 1;

    for(int c = 0; c < 6; c++){
        for(int d = n; d >= 0; d--){
            for(int e = 1; e <= coins[1][c] && d - e * coins[0][c] >= 0; e++){
                dp[d] += dp[d - e * coins[0][c]];
            }
        }
    }

    cout << dp[n] << "\n";

    return 0;
}