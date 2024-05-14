#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    for(ll c = 1; c <= n; c++){
        if(c == 1){
            cout << 0 << "\n";
        }else if(c == 2){
            cout << 6 << "\n";
        } else if(c == 3){
            cout << 28 << "\n";
        }else if(c == 4){
            cout << 96 << "\n";
        }else{
            ll total = c * c;
            ll inside = (c - 4) * (c - 4) * (total - 1 - 8);
            ll borders = 4 * (total - 1 - 2);
            ll next_borders = 8 * (total - 1 - 3);
            ll borders_not_borders = (c * 2 + (c - 2) * 2 - 12) * (total - 1 - 4);
            ll borders_one_above = 4 * (total - 1 - 3);
            ll borders_not_one = ((c - 2) * 2 + (c - 4) * 2 - 4) * (total - 1 - 6) ;
            cout << (inside + borders + next_borders + borders_not_borders + borders_one_above + borders_not_one) / 2 - 2<< "\n";
        }
    }

    return 0;
}
