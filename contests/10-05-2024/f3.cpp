#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int N = 1e5 + 10;

ll dp[N];

ll bfs(ll r){
    ll contagem = 1;
    set<pair<ll, ll>> checagem = {{0, r}};
    vector<pair<ll, ll>> tipos = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1,-1}, {-1,1}, {-1,-1}};
    list<pair<ll, ll>> corretos;
    for(int c = 0; c < 8; c++){
        pair<ll, ll> nova = {0 + tipos[c].first, r + tipos[c].second};
        ll dist = nova.first * nova.first + nova.second * nova.second;
        if (nova.first >= 0 && nova.first <= r && nova.second > 0 && nova.second <= r && dist >= r * r && dist < (r + 1) * (r + 1)){
            checagem.insert(nova);
            corretos.push_back(nova);
            contagem++;
        }
    }

    while(!corretos.empty()){
        pair<ll, ll> frente = corretos.front();
        for(int c = 0; c < 8; c++){
            pair<ll, ll> nova = {frente.first + tipos[c].first, frente.second + tipos[c].second};
            ll dist = nova.first * nova.first + nova.second * nova.second;
            if(checagem.find(nova) == checagem.end()){
                if (nova.first >= 0 && nova.first <= r && nova.second > 0 && nova.second <= r && dist >= r * r && dist < (r + 1) * (r + 1)){
                    checagem.insert(nova);
                    corretos.push_back(nova);
                    contagem++;
                }
            }
        }
        corretos.pop_front();
    }
    return contagem;
}

ll solve(ll &r){
    if(dp[r]){
        return dp[r];
    }
    return dp[r] = 4 * bfs(r);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t, r;
    cin >> t;
    while(t--){
        cin >> r;
        cout << solve(r) << "\n";
    }

    return 0;
}