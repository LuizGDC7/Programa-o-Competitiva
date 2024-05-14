#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, h, qtd = 0, entry;
    cin >> n >> h;
    for(int c = 0; c < n; c++){
        cin >> entry;
        entry <= h ? qtd++ : qtd;
    }

    cout << qtd << "\n";
    return 0;
}