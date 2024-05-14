#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, qtd = 0, ble;
    cin >> n >> k;
    for(int c = 0; c < n; c++){
        cin >> ble;
        qtd += (5 - ble >= k ? 1 : 0);
    }

    cout << qtd/3 << "\n";

    return 0;
}