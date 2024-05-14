#include <bits/stdc++.h>

using namespace std;

struct pos{
    int y, x;
};

void solve(char map[][1003], char ver[][1003], pos &s, int n, int m){
    pos mov[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}}, util;
    char dir[4] = {'D', 'U', 'R', 'L'};
    list<pos> passou;
    passou.push_back(s);
    ver[s.y][s.x] = 1;
    while(!passou.empty()){
        pos k = passou.front();
        for(int c = 0; c < 4; c++){
            util.y = k.y + mov[c].y, util.x = k.x + mov[c].x;
            if(util.y >= 0 && util.y < n && util.x >= 0 && util.x < m){
                if(ver[util.y][util.x] == 0 && map[util.y][util.x] == '.' || map[util.y][util.x] == 'B'){
                    passou.push_back(util);
                    ver[util.y][util.x] = dir[c];

                    if(map[util.y][util.x] == 'B'){
                        return;
                    }
                }
            }
        }
        passou.pop_front();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char map[1003][1003];
    char ver[1003][1003];
    pos s, f;

    int n, m, y, x;
    cin >> n >> m;

    for(int c = 0; c < n; c++){
        for(int d = 0; d < m; d++){
            cin >> map[c][d];
            ver[c][d] = 0;
            if(map[c][d] == 'A'){
                s.y = c, s.x = d;
            }

            if(map[c][d] == 'B'){
                f.y = c, f.x = d;
            }
        }
    }

    solve(map, ver, s, n, m);

    if(ver[f.y][f.x]){
        int qtd = 0;
        pos bt = f;
        list<char> res;
        pos mv[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        char letra[4] = {'U', 'D', 'L', 'R'};
        cout << "YES\n";
        for( ;map[bt.y][bt.x] != 'A'; ){
            qtd++;
            res.push_front(ver[bt.y][bt.x]);
            for(int c = 0; c < 4; c++){
                if(ver[bt.y][bt.x] == letra[c]){
                    bt.y += mv[c].y;
                    bt.x += mv[c].x;
                    break;
                }
            }
        }

        cout << qtd << "\n";

        for(auto c = res.begin(); c != res.end(); c++){
            cout << *c;
        }

        cout << "\n";
    }else{
        cout << "NO\n";
    }

    return 0;
}