#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    if(min({n, m, k}) >= n){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }

    return 0;
}