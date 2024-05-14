#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, k, q, bla, size, retirados;
    cin >> t;
    while(t--){
        cin >> k >> q;
        vector<int> index(k + 3);
        for(int c = 0; c < k ;c++){
            cin >> index[c];
        }

        for(int c = 0; c < q; c++){
            cin >> size;
            while(1){
                retirados = 0;
                for(int d = 0; d < k; d++){
                    if(index[d] <= size) {
                        retirados++;
                    }else{
                        break;
                    }
                }
                    if(!retirados){
                        cout << (c ? " " : "") << size;
                        break;
                    }
                    size -= retirados;
            }
        }
        cout << "\n";
    }

    

    return 0;
}