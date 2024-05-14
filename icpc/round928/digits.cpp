#include <bits/stdc++.h>

#define ll long long

using namespace std;

#define max 200500

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int solve[max];
    solve[0] = 0;
    int n, d, qtd;

    cin >> n;

    for(int c = 1; c <= max - 1; c++){
        qtd = 0;
        d = c;
        while(d){
            qtd += d % 10;
            d /= 10;
        }

        solve[c] = solve[c - 1] + qtd;
    }

    for(int c = 1; c <= n; c++){
        cin >> d;
        cout << solve[d] << "\n";        
    }

    return 0;
}