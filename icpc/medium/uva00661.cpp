#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int electronics[25];
    bool state[25];
    bool blown;
    bool first = true;

    int n, m, o, amp, ble, greatest, bli = 1;

    while(1){
        cin >> n >> m >> o;
        if(!n && !m && !o){
            break;
        }

        amp = greatest = 0;
        blown = false;

        for(int c = 0; c < n; c++){
            state[c] = false;
            cin >> electronics[c];
        }

        for(int c = 0; c < m; c++){
            cin >> ble;
            state[ble - 1] = !state[ble - 1];
            if(state[ble - 1]){
                amp += electronics[ble - 1];
                if(amp > o){
                    blown = true;
                }
                greatest = max(amp, greatest);
            }else{
                amp -= electronics[ble - 1];
            }
        }
        /*
        if(first){
            first = !first;
        }else{
            cout << "\n";
        }
        */
        cout << "Sequence " << bli << "\n";

        if(blown){
            cout << "Fuse was blown.\n\n";
        }else{
            cout << "Fuse was not blown.\n";
            cout << "Maximal power consumption was " << greatest << " amperes.\n\n";
        }
        

        bli++;

    }


    return 0;
}