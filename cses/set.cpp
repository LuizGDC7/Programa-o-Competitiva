#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, res;
    cin >> n;

    //res = ((n + 1) * n)/2;

    if((n % 4 != 3) && (n % 4 != 0)){
        cout << "NO\n";
    }else{
        cout << "YES\n";
        cout << n / 2 << "\n";
        int c = n, d = 1;
        while(c > 0){
            if(c != n){
                cout << " " << c;
            }else{
                cout << c;
            }

            c -= (d++ % 2 ? 3 : 1);
        }
        cout << "\n" << n / 2  + n % 2 << "\n";
        c = n - 1, d = 2;
        while(c > 0){
            if(c != n - 1){
                cout << " " << c;
            }else{
                cout << c;
            }

            c -= (d++ % 2 ? 3 : 1);
        }

        cout << "\n";
        
    }


    /*

    1 4 5
    2 3 6 7
    
    9 6 5 2 1
    8 7 4 3

    10 7 6 3 2
    9  8 5 4 1

    10 9    6 5     2 1
        8 7     4 3

    7 4 3
    6 5 2 1

    8 5 4 1
    7 6 3 2

    11 8 7 4 3
    10 9 6 5 2 1
 
    16 13 12  9 8 5 4 1
    15 14 11 10 7 6 3 2
    


   3, 4 -> 7, 8 -> 11, 12 -> 15, 16
    
    */

    return 0;
}