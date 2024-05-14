#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int qtd;
    cin >> qtd;

    vector<int> aux;
    for(int c = 0; c < 2e5 + 10; c++){
        aux.push_back(c);
    }

    while(qtd--){
        int n, k, i, f, q;
        cin >> n;
        vector<int> copy = aux;
        for(int c = 0; c < n; c++){
            cin >> k;
            i = 0, f = n - 1;
            while(i != f){
                q = (i + f) / 2;
                if(copy[q] ){

                }
            }

        }



    }
    


    return 0;
}