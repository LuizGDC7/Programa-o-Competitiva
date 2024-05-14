#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long mediana(vector<long long int> &matrix, long op){
    int inicio = matrix.size()/2;
    int fim = matrix.size() - 1; 
    long long limite = matrix[fim];
    for(int c = inicio; c < fim; c++){
        if(limite == matrix[c]){
            break;
        }
        if(limite - matrix[c] <= op){
            op -= limite - matrix[c];
            matrix[c] += limite - matrix[c];
        }else{
            matrix[c] += op;
            if(matrix[c] < matrix[c + 1]){
                return matrix[c];
            }else{
                return matrix[c + 1];
            }
        }
    }

    long long operacoes_restantes = op / (matrix.size() - inicio);
    return matrix[inicio] + operacoes_restantes;
}

int main(){
    int n;
    long k;
    cin >> n >> k;
    vector<long long int> numeros(n);
    for(long long &h: numeros){
        cin >> h;
    }

    sort(numeros.begin(), numeros.end());

    cout << mediana(numeros, k) << endl;

    return 0;
}