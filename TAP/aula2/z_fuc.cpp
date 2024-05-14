#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> z_func(std::string &palavra){
    int n = palavra.size();
    std::vector<int> z(n);
    int l = 0, r = 0;
    for(int i = 1; i < n; i++){
        if(i < r){
            z[i] = std::min(r - i, z[i - l]);
        }
        while(i + z[i] < n && palavra[z[i]] == palavra[i + z[i]]){
            z[i]++;
        }
        if(i + z[i] > r){
            l = i;
            r = i + z[i];
        }
    }
    return z;
}

int qtd_ocorrencias(std::string &palavra, std::string &padrao){
    int qtd_ocor = 0;
    int tamanho = padrao.size();
    std::string nova = padrao + '#' + palavra;
    std::vector<int> verificar = z_func(nova);
    for(int percorrer: verificar){
        if(percorrer == tamanho){
            qtd_ocor++;
        }
    }
    return qtd_ocor;
}

int main(){
    std::string palavra = "abacaxi-axi", padrao = "caxi";
    //std::cin >> palavra >> padrao;
    std::string nova = padrao + '#' + palavra;
    std::vector<int> checa = z_func(nova);
    //std::cout << qtd_ocorrencias(palavra, padrao) << std::endl;
    for(int h: checa){
        std::cout << h << ' ';
    }

    return 0;
}