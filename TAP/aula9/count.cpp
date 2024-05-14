#include <iostream>
#include <vector>

using namespace std;

#define ll long long

int main(){
    ll n, k, total = 0;
    cin >> n >> k;
    vector<ll> nums(k);
    for(ll c = 0; c < k; c++){
        cin >> nums[c];
    }

    vector<ll> poc(n + 2, 0);
    for(ll c = 0; c < k; c++){
        for(ll d = 1; d <= n;  d++){
            if(d%nums[c] == 0){
                poc[d] = 1;
            }
        }
    }

    for(ll c = 1; c <= n; c++){
        if(poc[c] == 1){
            total++;
        }
    }

    cout << total << "\n";

    return 0;
}