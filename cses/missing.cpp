#include <bits/stdc++.h>

#define ll long long

using namespace std;

#define maximum int(2*1e5 + 10)

int num[maximum];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, bla;
    cin >> n;

    for(int c = 1; c <= n - 1; c++){
        cin >> bla;
        num[bla] = 1;
    }

    for(int c = 1; c <= n; c++){
        if(num[c] != 1){
            cout << c << "\n";
            break;
        }
    }

    return 0;
}