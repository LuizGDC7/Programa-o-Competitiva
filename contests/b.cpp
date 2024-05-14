#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int maximum = 2e5 + 10;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int n, p = 0, bla, t;
    cin >> t;
    while(t--){
        cin >> n;
        vector<char> tem(n + 10, 0);
        p = 0;
        for(int c = 0; c < n; c++){
            cin >> bla;
            if(tem[bla] == 0){
                tem[bla] = 1;
            }else{
                p++;
            }
        }

        cout << p << "\n";
    }

    return 0;
}