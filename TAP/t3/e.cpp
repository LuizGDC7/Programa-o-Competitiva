#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b;
    cin >> n >> m;
    vector<int> team(n + 1, -1);
    vector<vector<int>> friends (n + 1, vector<int>(0));
    for(int c = 0; c < m; c++){
        cin >> a >> b;
        friends[a].push_back(b);
        friends[b].push_back(a);

        if(team[a] != -1){
            for(int c = 0; c < friends[b].size(); c++){
                if(team[friends[b][c]] == !team[a]){
                    cout << "IMPOSSIBLE\n";
                    return 0;
                }
            }
            team[b] = !team[a];
            continue;
        }

        if(team[b] != -1){
            for(int c = 0; c < friends[a].size(); c++){
                if(team[friends[a][c]] == !team[b]){
                    cout << "IMPOSSIBLE\n";
                    return 0;
                }
            }
            team[a] = !team[b];
            continue;
        }

        int ca1 = 1, ca2 = 1, cb1 = 1, cb2 = 1;

        for(int c = 0; c < friends[a].size(); c++){
            //if(team[friends[a][c]] != -1){
                if(team[friends[a][c]] == 0){
                    ca1 = 0;
                }

                if(team[friends[a][c]] == 1){
                    ca2 = 0;
                }
            //}
        }

        for(int c = 0; c < friends[b].size(); c++){
            //if(team[friends[a][c]] != -1){
                if(team[friends[b][c]] == 0){
                    cb1 = 0;
                }

                if(team[friends[b][c]] == 1){
                    cb2 = 0;
                }
            //}
        }

        if(ca1 == ca2 == 0 || cb1 == cb2 == 0){
            cout << "IMPOSSIBLE\n";
            return 0;
        }

        if(ca1 == 1 && cb2 == 1){
            team[a] = 0;
            team[b] = 1;
        }

        if(ca2 == 1 && cb1 == 1){
            team[a] = 1;
            team[b] = 0;
        }

    }

    for(int c = 1; c <= n; c++){
        cout << (c == 1 ? "" : " ") << team[c] + 1;
    }

    cout << "\n";


    return 0;
}