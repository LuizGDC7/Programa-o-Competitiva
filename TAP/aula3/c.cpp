#include <iostream>
#include <limits.h>

using namespace std;

const long long modulo = 1e9 + 7;

long long int exponenciacao(long long num, long long qtd){
    if(qtd > 1){
        if(qtd%2 == 0){
            return exponenciacao((num*num)%modulo, qtd/2)%modulo;
        }else{
            return (num)*(exponenciacao((num*num)%modulo, qtd/2)%modulo)%modulo;
        }
    }else{
        if(qtd == 1){
            return num%modulo;
        }else{
            return 1;
        }
    }
}

int main(){
    long long int qt, a, b;
    cin >> qt;
    for(;qt > 0; qt--){
        cin >> a >> b;
        cout << exponenciacao(a, b)%modulo << endl;
    }

    return 0;
}