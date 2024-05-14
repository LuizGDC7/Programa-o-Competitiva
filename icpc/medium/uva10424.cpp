#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int number(char ble[]){
    int size = strlen(ble);
    int qtd = 0;
    for(int c = 0; c < size; c++){
        if(ble[c] >= 'a' && ble[c] <= 'z'){
            qtd += ble[c] - 'a' + 1;
        }

        if(ble[c] >= 'A' && ble[c] <= 'Z'){
            qtd += ble[c] - 'A' + 1;
        }
    }

    return qtd;
}

int love(int x){
    if(x < 10 && x >= 0){
        return x;
    }

    int qtd = 0;
    while(x){
        qtd += x % 10;
        x /= 10;
    }

    return love(qtd);
}

int main(){
    char name1[30], name2[30];
    double f1, f2, p;
    while(scanf("%[^\n]%*c%[^\n]%*c", name1, name2) != EOF){
        f1 = (double) love(number(name1));
        f2 = (double) love(number(name2));
        p = min(f1, f2) / max(f1, f2);

        printf("%.2lf %c\n", 100 * p, '%');

    }
    return 0;
}