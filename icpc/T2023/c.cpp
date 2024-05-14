#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

struct big{
    int photos;
    int gelement;

    big(int photos, int gelement){
        this->photos = photos;
        this->gelement = gelement;
    }

    big(){

    }
};

big dfs(vector<vector<int>> &adjacent, vector<int> &values, vector<char> &visited, vector<int> &dp, int actual, int desired){
    if(actual == desired){
        big ble = big(1, desired);
        return ble;
    }

    visited[actual] = 1;

    big bla = big(1, actual);
    big peconha;
    for(auto percorrer: adjacent[actual]){
        if(visited[percorrer] == 0){
            peconha = dfs(adjacent, values, visited, dp, percorrer, desired);
            if(peconha.photos > bla.photos){
                if(peconha.gelement < bla.gelement){
                    bla = big(peconha.photos + 1, bla.gelement);
                }
            }
            
            if((peconha.photos == bla.photos == 1) && peconha.gelement < bla.gelement){
                bla = big(1, peconha.gelement);
            }
            
        }

    }

    if(bla.gelement != actual && bla.photos != 1){
        dp[actual] = bla.photos;
        return bla;
    }

    bla = big(0, -INT_MAX);
    return bla;
    
}

int solve(vector<vector<int>> &matrix, vector<int> &values, vector<int> &dp, int desired, int n){
    if(dp[desired] != 0){
        return dp[desired];
    }

    vector<char> visited(n + 1, 0);

    big retorno = dfs(matrix, values, visited, dp, 1, desired); 

    return retorno.photos;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, po;
    cin >> n;
    vector<vector<int>> adj(n + 1, vector<int>(0));
    vector<int> dp(n + 1, 0), values(n + 1);
    for(int c = 2; c <= n; c++){
        cin >> po;
        adj[c].push_back(po);
        adj[po].push_back(c);
    }

    for(auto &h: values){
        cin >> h;
    }

    for(int c = 2; c <= n; c++){
        if(c == 2){
            cout << solve(adj, values, dp, c, n);
        }else{
            cout << " " << solve(adj, values, dp, c, n);
        }
        
    }
    cout << "\n";

    

    return 0;
}