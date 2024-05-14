#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int N = 1e5 + 10;

ll consulta[N];
ll solve[N];

ll altura(ll x, ll r){
    double y1 = sqrt((r + 1) * (r + 1) - x * x);
    ll y2 = y1;
    while(y2 * y2 >= y1 * y1){
        y2--;
    }
    return y2;
}

ll buscabin(ll alt, ll inicio, ll final, ll r){
    ll medio;
    while(final - inicio > 1){
        medio = (final + inicio) / 2;
        if(altura(medio, r) < alt){
            final = medio;
        }else{
            inicio = medio;
        }
    }

    if(altura(final, r) == alt){
        return final;
    }

    return inicio;
}

ll fullcirculo(ll r){
    ll soma = 2 * r, ultimo_indice, nova_altura;
    for(ll c = 1; c <= r;){
        nova_altura = altura(c, r);
        ultimo_indice = buscabin(nova_altura, c, r, r);
        soma += ((ultimo_indice - c + 1) * (nova_altura * 2 + 1)) * 2;
        c = ultimo_indice + 1;
    }
    return soma;
}

void build(void){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    /*
    for(int c = 1; c <= 1e5; c++){
        consulta[c] = fullcirculo(c);
    }

    for(int c = 2; c <= 1e5; c++){
        solve[c] = consulta[c] - consulta[c - 1];
    }
    */

   cout << fullcirculo(1e5 + 1) - fullcirculo(1e5) << "\n";
    

    return 0;
}