#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<long> adultos(0);
    vector<long> criancas(0);

    int n, maior = 0, ultimo = 0, qtd_menores = 0;
    long numero;
    string palavra;
    cin >> n;
    cin >> palavra;
    for (int c = 0; c < palavra.size(); c++){
        cin >> numero;
        if (palavra[c] == '0'){ // 0 - crianças, 1 - adultos
            criancas.push_back(numero);
        }
        else{
            adultos.push_back(numero);
        }
    }

    sort(criancas.begin(), criancas.end());
    sort(adultos.begin(), adultos.end());
    if (adultos.size() == 0){
        cout << criancas.size() << endl;
    }
    else if (criancas.size() == 0){
        cout << adultos.size() << endl;
    }
    else{
        for (int c = 0; c < adultos.size(); c++){
            
            for (int d = ultimo; d < criancas.size(); d++, ultimo++){
                if (criancas[d] >= adultos[c]){
                    break;
                }else{
                    qtd_menores++;
                }
            }
            if (qtd_menores + adultos.size() - c >= maior){
                maior = qtd_menores + adultos.size() - c;
            }
            
        }
        cout << maior << endl;
    }

    return 0;
}