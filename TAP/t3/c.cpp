#include <bits/stdc++.h>

using namespace std;

//#define g vector<vector<int>>

int solve(vector<vector<int>> &mat, vector<vector<char>> &ver, /*vector<vector<vector<pair<int, int>>>> &g, */int n, int m){
    int nivel = 1, y, x;
    int qtd1 = 0, qtd2 = 0;

    if(mat.size() == 1 && mat[0].size() == 1){
        return 0;
    }
    ver[0][0] = 1;

    list<pair<int, int>> caminhos;
        
    if(mat[0][0] < n){
        caminhos.push_back(pair<int, int>(mat[0][0], 0));
        qtd1++;
    }

    if(mat[0][0] < m){
        caminhos.push_back(pair<int, int>(0, mat[0][0]));
        qtd1++;
    }

    while(!caminhos.empty()){
        if(!qtd1){
            qtd1 = qtd2;
            qtd2 = 0;
            nivel++;
        }

        y = caminhos.front().first;
        x = caminhos.front().second; 

        if(y == n - 1 && x == m - 1){
            return nivel;
        }

        if(ver[y][x] == 1){
            qtd1--;
            caminhos.pop_front();
            continue;
        }

        if(y + mat[y][x] < n){
            caminhos.push_back(pair<int, int>(y + mat[y][x], x));
            qtd2++;
            //ver[y + mat[y][x]][x] = 1;
        }

        if(y - mat[y][x] >= 0){
            caminhos.push_back(pair<int, int>(y - mat[y][x], x));
            qtd2++;
            //ver[y - mat[y][x]][x] = 1;
        }

        if(x + mat[y][x] < m){
            caminhos.push_back(pair<int, int>(y, x + mat[y][x]));
            qtd2++;
            //ver[y][x + mat[y][x]] = 1;
        }

        if(x - mat[y][x] >= 0){
            caminhos.push_back(pair<int, int>(y, x - mat[y][x]));
            qtd2++;
            //ver[y][x - mat[y][x]] = 1;
        }

        ver[y][x] = 1;
        qtd1--;
        caminhos.pop_front();

    }

    return -1;

}

int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n, m;
    scanf("%d %d", &n, &m);
    vector<vector<int>> mat(n + 1, vector<int>(m));
    vector<vector<char>> ver(n + 1, vector<char>(m, 0));
    for(int c = 0; c < n; c++){
        for(int d = 0; d < m; d++){
            scanf("%1d", &mat[c][d]);
            ver[c][d] = 0;
        }
    }

    printf("%d\n", solve(mat, ver, n, m));

    //vector<vector<vector<pair<int, int>>>> g(n + 1, vector<vector<pair<int, int>>> (m, vector<pair<int, int>> (0)));

    return 0;
}