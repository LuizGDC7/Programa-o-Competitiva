#include <bits/stdc++.h>

#define ll long long

using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, k,j;
    cin >> n;
    while(n--){
        cin >> a >> b;

        if(abs(a - b) > min(a, b)){
            cout << "NO\n";
            continue;
        }

        /*
        
        j = max(a, b);
        k = min(a, b);
        a = j, b = k;
        

        if(a - b > 1){
            k = a - b;
            a -= 2 * k;
            b -= k;
        }

        */

        if((a % 3 == 2 && b % 3 == 1) || (a % 3 == 0 && b % 3 == 0)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}


/*

*
*
**

*/