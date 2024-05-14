#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a1, a2;

    cin >> a1 >> a2;

    for(int c = 0; c < a1.size(); c++){
        if(a1[c] <= 'Z' && a1[c] >= 'A'){
            a1[c] = a1[c] - ('Z' - 'z');
        }

        if(a2[c] <= 'Z' && a2[c] >= 'A'){
            a2[c] = a2[c] - ('Z' - 'z');
        }
    }

    if(a1 > a2){
        cout << 1 << "\n";
    }else if(a1 < a2){
        cout << -1 << "\n";
    }else{
        cout << 0 << "\n";
    }
    return 0;
}