#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long

void escolha(vector<ll> &primes, ll index, ll charge, ll signal, ll qtd, ll *res, ll interval){
    for(ll c = index; c < primes.size(); c++){
        if(primes.size() - c < qtd){
            return;
        }
        if(qtd > 0){
            escolha(primes, c + 1, charge*primes[c], signal, qtd - 1, res, interval);
        }else{
            *res += (signal*interval)/(primes[c]*charge);
            //cout << primes[c]*charge << " ";
            //(*res)++;
        }
    }
}

ll solve(ll interval, vector<ll> &primes){
    ll res = 0;
    ll signal = 1;
    for(ll c = 0; c < primes.size(); c++){
        //cout << "Fase " << c + 1 << " : ";
        //res = 0;
        escolha(primes, 0, 1, signal, c, &res, interval);
        signal *= -1;
        //cout << "Res: " << res << "\n";
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    int k;
    
    cin >> n >> k;
    vector<ll> primes(k);
    for(int c = 0; c < k; c++){
        cin >> primes[c];
    }

    //sort(primes.begin(), primes.end(), greater<ll>());

    cout << solve(n, primes) << "\n"; 

    return 0;
}