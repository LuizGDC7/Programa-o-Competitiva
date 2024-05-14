#include <bits/stdc++.h>

using namespace std;

void solve(vector<vector<int>> &mat, vector<int> &p, vector<char> &ver){
    list<int> passou;
    passou.push_back(1);
    ver[1] = 1;
    int n = mat.size() - 1;

    while(!passou.empty()){
        int k = passou.front();

        for(int c = 0; c < mat[k].size(); c++){
            if(ver[mat[k][c]] == 1){
                continue;
            }

            p[mat[k][c]] = k;
            
            passou.push_back(mat[k][c]);

            ver[mat[k][c]] = 1;

            if(mat[k][c] == n){
                return;
            }
        }

        //ver[k] = 1;
        passou.pop_front();

    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, a, b;
    cin >> n >> m;
    vector<vector<int>> mat(n + 1, vector<int>(0));
    vector<int> p(n + 1, 0);
    vector<char> ver(n + 1, 0);
    list<int> passou;

    for(int c = 0; c < m; c++){
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    solve(mat, p, ver);

    if(p[n] != 0){
        //passou.erase(passou.begin(), passou.end());
        int qtd = 0;
        for(int c = n; ;c = p[c]){
            passou.push_front(c);
            qtd++;
            if(c == 1){
                break;
            }
        }
        cout << qtd << "\n";
        for(auto i = passou.begin(); i != passou.end(); i++){
            cout << (*i == 1 ? "" : " ") << *i;
        }
        cout << "\n";

    }else{
        cout << "IMPOSSIBLE\n";
    }

    return 0;
}