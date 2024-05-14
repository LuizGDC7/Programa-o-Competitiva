#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>> coins(3, vector<int>(6));
    coins[0] = {2, 5, 10, 20, 50, 100};
    int n, qtd = 0;
    cin >> n;
    for(int c = 0; c < 6; c++){
        cin >> coins[1][c];
    }
    coins[2] = {coins[0][0] * coins[1][0], coins[0][1] * coins[1][1], coins[0][2] * coins[1][2], coins[0][3] * coins[1][3], coins[0][4] * coins[1][4], coins[0][5] * coins[1][5]};
    vector<vector<int>> dp(n + 1, vector<int>(coins[0].size(), 0));
    
    for(int c = 0; c < coins[0].size(); c++){
        for(int d = 1; d <= coins[1][c] && d * coins[0][c] <= n; d++){
            dp[ d * coins[0][c] ][c] = 1;
        }
    }

    

    cout << qtd << "\n";
    //vector<bool> done(n + 2, false);

    return 0;
}

//vector<int> dp2(n + 1, 0); linha 20 eu acho

    //dp2[0] = 0, dp2[1] = 0;
/*
    
*/
    /*
    for(int c = 0; c < coins[0].size();c++){
        for(int d = 1; d <= coins[1][c] && d * coins[0][c] <= n; d++){
            dp2[ d * coins[0][c]] += 1;
        }
    }
    */
   /*
    for(int bla = 2; bla <= n; bla++){
        
        if(dp2[bla] != -1){
            continue;
        }
        
        qtd = 0;
        for(int c = 0; c < coins[0].size(); c++){
            for(int d = 1; d <= coins[1][c] && d * coins[0][c] <= bla; d++){
                for(int e = c; e < coins[0].size(); e++){
                    if(dp2[bla - coins[0][c] * d][e] != -1){
                        qtd += 
                    }
                    qtd += dp[bla - coins[0][c] * d ][e];
                }
            }
        }
        dp2[bla] = qtd;
    }
    */