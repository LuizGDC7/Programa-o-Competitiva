#include <iostream>

using namespace std;

int main(){
    int qtd = 0;
    int n = 22222, k;
    for(int c = 1; c <= n; c++){
        k = c;
        while(k){
            qtd += (k % 10 == 0 ? 1 : 0);
            k /= 10;
        }
    }

    cout << qtd << "\n";

    return 0;
}