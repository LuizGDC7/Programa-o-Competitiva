#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int max, qtd = 0;
    cin >> max;
    for(int c = 1; c < max; c++){
        if(!(max % c)){
            qtd++;
        }
    }

    cout << qtd << "\n";

    return 0;
}