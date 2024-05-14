#include <vector>
#include <iostream>

using namespace std;
/*
void build_crivo(vector<char> &primos, vector<int> &primos_solos, int limite){
    for(int c = 2; c * c <= limite; c++){
        if(primos[c]){
            for(int d = c*c; d <= limite; d += c){
                primos[d] = 0;
            }
        }
    }

    for(int c = 2; c <= limite; c++){
        if(primos[c]){
            primos_solos.push_back(c);
        }
    }
}

bool crivo(vector<char> &primos, int num){
    return (bool) primos[num];
}
*/
void build_crivo_div(vector<int> &primos, int limite){
    for(int c = 2; c * c <= limite; c++){
        if(primos[c] == 1){
            for(int d = c * c; d <= limite; d += c){
                if(primos[d] < 2){
                    primos[d] = c;
                }
            }
        }
    }
}

int menor_primo(vector<int> &primos,int num){
    if(primos[num] > 1){
        return primos[num];
    }else{
        return num;
    }
}
/*
vector<int> retorna_div(int num, vector<char> &primos, vector<int> &primos_solos){
    vector<int> retorno;
    if(num <= 1){
        retorno = {0};
    }else{
        if(crivo(primos, num)){
            retorno = {1};
        }else{
            for(int c = 0; c < primos_solos.size() && num > 1; c++){
                if(num % primos_solos[c] == 0){
                    int adicionar = 1;
                    num /= primos_solos[c];
                    while(num % primos_solos[c] == 0){
                        num /= primos_solos[c];
                        adicionar++;
                    }
                    retorno.push_back(adicionar);
                }
            }   
        }
    }
    return retorno;
}


*/

vector<int> fatores_primos(vector<int> &primos, int num){
    vector<int> retorno;
    if(num <= 1){
        return {0};
    }else {
        while(num > 1){
            int divisor_atual = menor_primo(primos, num);
            int res = 0;
            while(menor_primo(primos, num) == divisor_atual){
                res++;
                num /= divisor_atual;
            }
            retorno.push_back(res);
        }
    }
    return retorno;
}

int divisores(vector<int> fatores){
    int resultado = 1;
    for(int c = 0; c < fatores.size(); c++){
        fatores[c]++;
        resultado *= fatores[c];
    }
    return resultado;
}


int main(){
    int n, num_limite = 1e7 + 1;
    std::ios_base::sync_with_stdio(false);
    //cin >> n;
    //vector<char> primos(num_limite, 1);
    //vector<int> primos_solos;
    vector<int> primeiros_div_primos(num_limite, 1);
    //build_crivo(primos, primos_solos, num_limite);
    build_crivo_div(primeiros_div_primos, num_limite);
    /*
    for(;n > 0; n--){
        int checa;
        cin >> checa;
        cout << divisores(fatores_primos(primeiros_div_primos, checa)) << endl;
    }
    */
    /*    
    for(int c = 1; c < primeiros_div_primos.size(); c++){
        cout << menor_primo(primeiros_div_primos, c) << endl;
    }
    */
    return 0;
}