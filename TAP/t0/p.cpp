#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int gifters[110], n, ble;
    cin >> n;
    for(int c = 1; c <= n; c++){
        cin >> ble;
        gifters[ble] = c;
    }

    for(int c = 1; c <= n; c++){
        if(c != 1){
            cout << " ";
        }
        cout << gifters[c];
    }
    cout << "\n";


    return 0;
}