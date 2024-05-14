#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string base, c1, c2;
    int n, m;
    cin >> n >> m;
    for(int c = 0; c < m; c++){
        base.push_back('#');
        c1.push_back('.');
    }
    c2 = c1;
    c1[0] = '#';
    c2[c2.size() - 1] = '#';
    for(int c = 1; c <= n; c++){
        if(c % 2){
            cout << base << "\n";
        }else{
            if((c/2)%2){
                cout << c2 << "\n";
            }else{
                cout << c1 << "\n";
            }
        }
    }

    return 0;
}