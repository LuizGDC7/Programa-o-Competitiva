#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(int &n, int &m){
    if(m == 1 || n == m){
        for(int c = 1;  c <= n; c++){

            if(c != 1){
                cout << " " << (m == 1 && n != m ? to_string(c) : "1"); 
            }else{
                cout << c;
            }
        }
    }else{
        cout << "-1";
    }

    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int qtd, n, m;
    cin >> qtd;
    while(qtd--){
        cin >> n >> m;
        solve(n, m);
    }

    return 0;
}