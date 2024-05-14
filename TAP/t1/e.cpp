#include <iostream>

using namespace std;

const int maximum = 100*100 + 10;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, y, n;
    int pos[maximum];

    cin >> y >> x >> n;

    for(int c = 1; c <= n; c++){
        cin >> pos[c];
    }

    for(int c = 0, k = 1; c < y; c++){
        string res = "";
        for(int d = 0; d < x; d++){
            if(!pos[k]){
                k++;
            }

            if(d != 0){
                if(c % 2){
                    res = res + " ";
                }else{
                    res = " " + res;
                }

            }


            (c % 2 ? (res = res + to_string(k)) : (res = to_string(k) + res));
            pos[k]--;
        }

        cout << res << "\n";
        
        /*
        for(int d = (c % 2 ? 0 : x - 1); (c % 2 ? d < x : d >= 0); (c % 2 ? d++ : d--)){
            if(pos[k]){
                if(c != 0){

                }else{

                }
            }else{

            }
        }
        */
    }


    return 0;
}