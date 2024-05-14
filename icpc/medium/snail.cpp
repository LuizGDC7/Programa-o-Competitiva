#include <iostream>
//#include <cmath>

using namespace std;

#define ll long long

ll ceil(double x){
    ll bla = x;
    if(x > bla){
        return bla + 1;
    }else{
        return bla;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll h, u, d, limite, nova, hipernova, undernova, bla;
    double f, supernova, ble;
    while(1){
        cin >> h >> u >> d >> f;
        f = u * (f/100);
        if(!h){
            break;
        }

        limite = (long long) (u / f); // qtd maximo

        nova = (u - f - d != 0 ? ceil((h - f - d)/(u - f - d)) : __LONG_LONG_MAX__); // qtd final
        undernova = (u - f - d != 0 ? (-f - d)/(u - f - d) : __LONG_LONG_MAX__);

        if(nova <= limite && nova > 0){
            cout << "sucess on day " << nova << "\n";
            continue;
        }

        if(undernova <= limite && undernova > 0){
            cout << "failure on day " << undernova << "\n";
            continue;
        }else{
            bla = limite + ceil((limite * u - (limite - 1) * (f + d)) / d);
            cout << "failure on day " << bla << "\n";
        }

        /*

        supernova = limite * u - (limite - 1) * f - (limite - 1) * d; // h aplicando qtd maximo
        hipernova = ceil((supernova)/d);
        

        if(nova <= limite && nova > 0){
            cout << "sucess on day " << nova << "\n";
        }else{
            cout << "failure on day " << (limite + hipernova) << "\n";
        }
        */

    }


    return 0;
}