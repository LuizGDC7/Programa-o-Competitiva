#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

#define ll long long

struct init_value{
    ll value = -1;
};

typedef map<ll, init_value> mapa;

ll solve(mapa &calc, ll val){
    ll pre = calc[val].value;
    ll post;

    if(pre != -1){
        return pre;
    }

    if(val == 0){
        return calc[val].value = 0;
    }

    post = solve(calc, val/2) + solve(calc, val / 3) + solve(calc, val/4);

    return calc[val].value = max(val, post);

}

int main(){
    mapa calculated;
    ll value;
    while(cin >> value){
        cout << solve(calculated, value) << "\n";
    }

    return 0;
}