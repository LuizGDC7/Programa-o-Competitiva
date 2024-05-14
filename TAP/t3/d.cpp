#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

vector<int> solve(vector<vector<int>> &mat, int start){
    vector<int> dist(mat.size(), INT_MAX);
    vector<char> ver(mat.size(), 0);
    vector<int> father(mat.size(), -1);
    int parada = mat.size() - 1;

    dist[start] = 0;

    for(int c = 1; c < mat.size(); c++){
        int v = -1;
        for(int d = 1; d < mat.size(); d++){
            if(ver[d] == 0 && ((v == -1 ? true : dist[d] < dist[v]))){
                v = d;
            }
        }

        if(dist[v] == INT_MAX || v == parada){
            break;
        }

        ver[v] = 1;

        for(int j = 0; j < mat[v].size(); j++){
            int to = mat[v][j];
            if(dist[v] + 1 < dist[to]){
                dist[to] = dist[v] + 1;
                father[to] = v;
            }
        }
/*
        if(v == parada){
            break;
        }
*/
    }

    vector<int> bad(0);


    if (dist[parada] == INT_MAX){
        return bad;
    }

    vector<int> ret(0);

    for(int c = parada; ; c = father[c]){
        /*
        if(c == -1){
            return bad;
        }
        */
        ret.push_back(c);
        if(c == start){
            break;
        }
    }

    //reverse(ret.begin(), ret.end());

    return ret;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b;
    cin >> n >> m;
    vector<vector<int>> mat(n + 1, vector<int> (0));

    for(int c = 0; c < m; c++){
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    vector<int> res = solve(mat, 1);

    if(res.size() == 0){
        cout << "IMPOSSIBLE\n";
    }else{
        cout << res.size() << "\n";
        for(int c = res.size() - 1; c >= 0; c--){
            cout << (c < res.size() - 1 ? " " : "") << res[c];
        }
        cout << "\n";
    }

    return 0;
}