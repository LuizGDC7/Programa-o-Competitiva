#include <bits/stdc++.h>

#define ll long long

using namespace std;

#define maxi 2e5 + 10

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll qtd = 0;
    int n, bla, last;
    cin >> n;
    for(int c = 0; c < n; c++){
        cin >> bla;
        if(c != 0){
            if(bla < last){
                qtd += last - bla;
                bla = last;
            }    
        }
        last = bla;
    }

    cout << qtd << "\n";



    return 0;
}