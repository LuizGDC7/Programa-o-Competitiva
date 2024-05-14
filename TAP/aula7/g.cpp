#include <iostream>
#include <limits.h>
#include <vector>
#include <algorithm>

using namespace std;

/*

1 | gyn = 0, contest = 0
2 | gyn = 0, contest = 1
3 | gyn = 1, contest = 0
4 | gyn = 1, contest = 1

*/

int escolhas[4][2] = { //linhas sao os casos, as colunas as possiveis escolhas do que fazer, 0 - gyn, 1 - contest, 2 - gyn + contest, 3 - descansar
        INT_MAX, INT_MAX,
        INT_MAX, 0,
        0, INT_MAX,
        0, 0
};

int solve(vector<int> &numeros, vector<vector<int>> &dp, int dia_anterior, int linha, int escolha_atual){
    
    if(dp[linha][escolha_atual] != -1){
        return dp[linha][escolha_atual];
    }

    int menor = INT_MAX;
    vector<int> candidatos;

    if(linha == numeros.size() - 1){
        return dia_anterior == 0 && (numeros[linha] != 1 && numeros[linha] != 3) || dia_anterior == 1 && (numeros[linha] != 1 && numeros[linha] != 2) || dia_anterior == 2 ? dp[linha][escolha_atual] = 0 : dp[linha][escolha_atual] = 1;
    }

    for(int c = 0; c < 3; c++){ //se nao pular significa que o c é uma escolha adequada
        if(dia_anterior == c){
            continue;
        }

        candidatos.push_back(c);        
    }

    if(candidatos.empty()){
        candidatos.push_back(2);
    }

    for(int c = 0; c < candidatos.size(); c++){
        for (int d = 0; d < 2; d++){
               
        }
    }


}

int main(){
    

    return 0;
}