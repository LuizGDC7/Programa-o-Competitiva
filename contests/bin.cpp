#include <bits/stdc++.h>

#define ll long long

using namespace std;

int tobin(int qtd){
    int pos = 1, res = 0;

    while(qtd){
        res = res + (qtd % 2) * pos;
        qtd /= 2;
        pos *= 10;
    }
    return res;
}

bool ef(int qtd){
    while(qtd){
        if(!(qtd % 10 == 0 || qtd % 10 == 1)){
            return false;
        }
        qtd /= 10;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> ble;
    int num;
    for(int c = 2;; c++){
        num = tobin(c);
        if(num > 1e5){
            break;
        }
        ble.push_back(num);
    }

    int n, t, d;
    
    cin >> n;
    
    while(n--){
        cin >> t;
        if(ef(t)){
            cout << "YES\n";
            continue;
        }
        for(int c = 0; c < ble.size(); c++){
            while(t % ble[c] == 0){
                t /= ble[c];
            }
            if(t == 1){
                break;
            }
        }

        cout << (t == 1 ? "YES\n" : "NO\n");

    }
    
    
    return 0;
}