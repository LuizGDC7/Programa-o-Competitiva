#include <iostream>
#include <set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, ble, d, e, f;
    bool done;
    while(1){
        done = true;
        cin >> a;
        if(!a){
            break;
        }
        set<int> keep;
        cin >> b;
        for(int c = 0; c < a; c++){
            cin >> ble;
            keep.insert(ble);
        }

        for(int c = 0; c < b; c++){
            int boo = 0;
            cin >> d >> e;
            for(int k = 0; k < d; k++){
                cin >> f;
                if(keep.find(f) != keep.end()){
                    boo++;
                }
            }
            done = done && (boo >= e);
        }

        if(done){
            cout << "yes\n";
        }else{
            cout << "no\n";
        }

    }



    return 0;
}