#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

#define ll long long

struct val{
    int valor = -1;
};

typedef map<int, val> mapa;

ll modulo = 1e9 + 7;

ll comb(ll *val, int size){
    int tam_vet = size;
    ll res = 1;
    ll qtd_usados = 0;
    mapa dp;
    for(int c = 0; c < tam_vet; c++){
        if(dp[val[c]].valor == -1){
            dp[val[c]].valor = val[c] - qtd_usados;
            res = (res*dp[val[c]].valor) % modulo;
            dp[val[c]].valor--;
            qtd_usados++;
        }else{
            if(dp[val[c]].valor == 0){
                return 0;
            }
            res = (res*dp[val[c]].valor)%modulo;
            dp[val[c]].valor--;
            qtd_usados++;
        }
    }
    return res;

}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    ll num[n];
    for(int c = 0; c < n; c++){
        cin >> num[c];
    }
    sort(num, num + n);
    cout << comb(num, n) << "\n";
  
    return 0;
}