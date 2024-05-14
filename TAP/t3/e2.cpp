#include <bits/stdc++.h>

using namespace std;

int solve(vector<vector<int>> &mat, vector<int> &team){
    //vector<char> ver(mat.size() + 1, 0);
    
    for(int c = 1; c <= mat.size(); c++){
        if(team[c] != -1){
            continue;
        }
        list<int> passou;
        int qtd1 = 1, qtd2 = 0;
        int actual = 1;
        passou.push_back(c);

        while(!passou.empty()){
            if(!qtd1){
                qtd1 = qtd2;
                qtd2 = 0;
                actual = (actual == 1 ? 2 : 1);
            }
            int k = passou.front();
            team[k] = actual;
            for(int c = 0; c < mat[k].size(); c++){
                if(team[mat[k][c]] != -1){
                    if(team[mat[k][c]] == actual){
                        return 0;
                    }
                    continue;
                }
                passou.push_back(mat[k][c]);
                qtd2++;
            }
            passou.pop_front();
            qtd1--;
        }
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, a, b;
    cin >> n >> m;
    vector<vector<int>> mat(n + 1, vector<int>(0));
    vector<int> team(n + 1, -1);
    for(int c = 0; c < m; c++){
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    if(solve(mat, team)){
        for(int c = 1; c <= n; c++){
            cout << (c == 1 ? "" : " ") << team[c];
        }
        cout << "\n";
    }else{
        cout << "IMPOSSIBLE\n";
    }

    return 0;
}