#include <iostream>
#include <vector>

using namespace std;

int solve(vector<vector<int>> &dp, int lin, int col){
    if(dp[lin][col] != -1){
        return dp[lin][col];
    }

    if(col == 4){
        if(lin > 2){
            return dp[lin][col] = solve(dp, 2, col);
        }else{
            return dp[lin][col] = solve(dp, lin, col);
        }
    }

    if(col == 0){
        return dp[lin][col] = lin + 1;
    }

    if(lin == 0 && col > 0){
        return dp[lin][col] = solve(dp, 1, col - 1);
    }

    return dp[lin][col] = solve(dp, solve(dp, lin - 1, col), col - 1);
}

int main(){
    vector<vector<int>> dp(200 + 1, vector<int>(5, -1));
    int n, m;
    cin >> m >> n;
    cout << solve(dp, m, n) << "\n";

    return 0;
}