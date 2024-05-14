#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    bool first = true;
    while(1){
        
        if(first){
            first = !first;
            cout << n;
        }else{
            cout << " " << n;
        }

        if(n == 1){
            break;
        }
        
        if(n % 2){
            n = n*3 + 1;
        }else{
            n /= 2; 
        }
        
    }

    cout << "\n";

    return 0;
}