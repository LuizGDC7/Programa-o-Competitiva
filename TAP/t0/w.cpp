#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, qtd0 = 0;
    bool first = true, one = false;
    char r;
    cin >> n;
    for(int c = 0; c < n; c++){
        cin >> r;
        if(r == 'n'){
            one = true;
            if(first){
                cout << 1;
                first = !first;
            }else{
                cout << " " << 1;
            }
        }

        if(r == 'z'){
            qtd0++;
        }
    }

    while(qtd0--){
        if(first){
            first = !first;
            cout << 0;
        }else{
            cout << " " << 0;
        }
    }

    cout << "\n";

    return 0;
}