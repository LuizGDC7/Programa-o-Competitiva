#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int N = 1e5 + 10;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    ll n, k, q;
    cin >> t;
    ll minutos[N];
    ll distancia[N];
    while(t--){
        minutos[0] = distancia[0] = 0;
        cin >> n >> k >> q;
        for(int c = 1; c <= k; c++){
            cin >> distancia[N];
        }
        for(int c = 1; c <= k; c++){
            cin >> minutos[c];
        }

        for(int c = 0; c < q; c++){
            cin >> q;
            ll pos = lower_bound(&distancia[0], &distancia[N], q) - &distancia[0];
            ll nova_dis = ;
            
            ll m_percorrido = minutos[pos - 1] + (q - distancia[pos - 1]) / ((distancia[pos] - distancia[pos - 1]) / (minutos[pos] - minutos[pos - 1]));
            cout << (ll) m_percorrido << "\n";
        }

    }

    return 0;
}