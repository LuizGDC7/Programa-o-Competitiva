#include <iostream>
#include <vector>

using namespace std;

#define ll long long

const long long modulo = 1e9 + 7;

ll paths(vector<vector<char>> &grid, vector<vector<ll>> &calc){
    
    int limit = grid.size();

    for(int lin = 0; lin < limit; lin++){
        for(int col = 0; col < limit ; col++){
            if(grid[lin][col] == '*'){
                continue;
            }

            if(lin != 0){
                calc[lin][col] = (calc[lin][col]%modulo + calc[lin - 1][col]%modulo)%modulo;
            }

            if(col != 0){
                calc[lin][col] = (calc[lin][col]%modulo + calc[lin][col - 1])%modulo;
            }

            if(lin == 0 && col == 0){
                calc[0][0] = 1;
            }
        }
    }
    return calc[limit - 1][limit - 1]%modulo;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n));
    vector<vector<ll>> calc(n, vector<ll>(n, 0));

    for(int c = 0;c < n; c++){
        for(int d = 0; d < n; d++){
            cin >> grid[c][d];
        }
    }

    cout << paths(grid, calc) << '\n';

    return 0;
}