#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, minimum, maximum, imin, imax, bla;
    cin >> n;
    for(int c = 0; c < n; c++){
        cin >> bla;
        if(c){
            if(bla > maximum){
                maximum = bla;
                imax = c + 1;
            }

            if(bla <= minimum){
                minimum = bla;
                imin = c + 1;
            }
        }else{
            minimum = maximum = bla;
            imin = imax = c + 1;
        }
    }

    if(imax < imin){
        cout << imax - 1 + (n - imin) << "\n";
    }else if(imax > imin){
        cout << imax - 1 + n - imin - 1 << "\n";
    }else{
        cout << 0 << "\n";
    }

    return 0;
}