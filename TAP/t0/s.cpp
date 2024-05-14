#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char cake[12][12];
    int sl[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, sc[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int r, c, qtd = 0;
    cin >> r >> c;
    for(int x = 0; x < r; x++){
        for(int y = 0; y < c; y++){
            cin >> cake[x][y];
            if(cake[x][y] == 'S'){
                sl[x] = sc[y] = 1;
            }
        }
    }

    for(int linha = 0; linha < r; linha++){
        if(sl[linha] == 1){
            continue;
        }
        for(int coluna = 0; coluna < c; coluna++){
            if(cake[linha][coluna] == '.'){
                qtd++;
                cake[linha][coluna] = 'x';
            }
        }
    }

    for(int coluna = 0; coluna < c; coluna++){
        if(sc[coluna] == 1){
            continue;
        }   

        for(int linha = 0; linha < r; linha++){
            if(cake[linha][coluna] == '.'){
                qtd++;
                cake[linha][coluna] = 'x';
            }
        }

    }

    cout << qtd << "\n";

    return 0;
}