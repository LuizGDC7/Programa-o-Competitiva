#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int ble, qtd = 0;
    for(int c = 0; c < 5; c++){
        for(int d = 0; d < 5; d++){
            cin >> ble;
            if(ble == 1){
                qtd += abs(2 - c) + abs(2 - d);
                cout << qtd << "\n";
                return 0;
            }
        }
    }

    return 0;
}