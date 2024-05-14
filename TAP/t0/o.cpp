#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int q[3]  = {0, 0, 0};
    int plus = 0;
    string ble;
    cin >> ble;

    for(auto h: ble){
        if(h == '1'){
            q[0]++;
        }

        if(h == '2'){
            q[1]++;
        }

        if(h == '3'){
            q[2]++;
        }

        if(h == '+'){
            plus++;
        }


    }

    for(int c = 0; c < 3; c++){
        while(q[c]-- > 0){
            cout << c + 1;
            if(plus--){
                cout << "+";
            }
        }
    }

    cout << "\n";
    
    return 0;
}