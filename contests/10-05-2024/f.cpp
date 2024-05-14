    #include <bits/stdc++.h>
     
    using namespace std;
     
    #define ll long long
     
    const int N = 1e5 + 10;
     
    ll dp[N];
    /*
    ll down(ll r){
        ll res = 2 * r + 1;
        while(r){
            if(r * r < res){
                return r;
            }
            r--;
        }
        return 1;
    }
    */
    ll solve(ll r){
        if(dp[r] != 0){
            return dp[r];
        }
     
        ll soma = 0;
     
        for(ll r2 = r; r2 > 0; r2--){
            for(ll c = r; c >= 0; c--){
            
                if(r2 * r2 + c * c < r * r + 2 * r + 1 && r2 * r2 + c * c >= r * r){
                    soma++;
                }
     
                if(r2 * r2 + c * c < r * r){
                    break;
                }
     
            }
        }
     
        return dp[r] = soma * 4;
    }
     
    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        ll t, r;
     
        for(int c = 1e5; c <= 1e5; c++){
            cout << solve(c) << "\n";
        }
     
        return 0;
    }