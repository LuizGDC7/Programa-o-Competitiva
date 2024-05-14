#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string grid[15];
    int qtd1a, qtd1d, t, size;
    bool square;
    cin >> t;
    for(int c = 0; c < t; c++){
        square = true;
        cin >> size;
        for(int d = 0; d < size; d++){
            cin >> grid[d];
        }

        qtd1a = 0;
        for(int d = 0; d < size; d++){
            qtd1d = 0;
            for(int e = 0; e < size; e++){
                if(grid[d][e] == '1'){
                    qtd1d++;
                }
                
            }

            if(qtd1d > 0 && qtd1a == 0){
                qtd1a = qtd1d; 
            }

            if(qtd1a != 0 && qtd1d > 0){
                square = square && (qtd1d == qtd1a);
            }
        }

        if(square){
            cout << "SQUARE\n";
        }else{
            cout << "TRIANGLE\n";
        }
        

    }

    return 0;
}