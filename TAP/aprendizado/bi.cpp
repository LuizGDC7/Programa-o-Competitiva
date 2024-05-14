#include <algorithm>
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int solve(int value, vector<int> &coins, vector<vector<int>> &dp, int linha, int coluna){ // linha - moeda / coluna - level
    if(value < 0){
        return dp[linha][coluna] = 0;
    }
    
    if(value == 0){
        return dp[linha][coluna] = 1;
    }    

    if(dp[linha][coluna] != -1){
        return dp[linha][coluna];
    }

    dp[linha][coluna] = 0;

    for(int c = 0; c < coins.size(); c++){
        if(coluna + 1 < dp[c].size()){
            dp[linha][coluna] += solve(value - coins[c], coins, dp, c, coluna + 1);
        }
    }

    return dp[linha][coluna];
}

int main(){
    int m;
    cin >> m;
    vector<int> vals = {0, 0, 0, 0, 0, 0};
    vector<int> moedas = {2, 5, 10, 20, 50, 100};

    for(int c = 0; c < 6; c++){
        cin >> vals[c];
    }

    //vector<vector<int>> coins(6);
    vector<vector<int>> dp;

    for(int c = 0; c < 6; c++){
        dp.push_back(vector<int>(vals[c] + 1, -1)); // estou colocando a quantidade de moedas possiveis de cada moeda da dp
    }

    cout << solve(m, moedas, dp, 0, 0) << "\n";

    
    return 0;
}