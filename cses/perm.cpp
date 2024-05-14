#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, c1, c2;

    cin >> n;

    if(n == 2 || n == 3){
        cout << "NO SOLUTION";
    }else if(n == 4){
        cout << "2 4 1 3"; 
    }else{
    
        c1 = 1, c2 = n / 2 + 1 + n % 2;
    
        for(int c = 1; c <= n; c++){
    
            if(c != 1){
    
                cout << " ";
    
            }
    
            cout << (c % 2 ? c1++ : c2++);
    
        }
    
    }

    cout << "\n";

    return 0;
}

/*

inicio1: 4
inicio2: 2

Aumenta em ordem crescente por 1

425361

inicio: max  n / 2 + n % 2

n + 1, n - 1, n + 1, n - 1

(-1)^(n+1) + 2(n - 1)

1 

1 2 3 | 4 5

1 4 2 5 3

add = max / 2 + max % 2

cout << c + (c % 2 ? add : 0);

1 2 3 4 | 5 6 7 8

1 5 2 6 3 7 4 8


52637481

impar -> n - 1
par -> n - 

*/