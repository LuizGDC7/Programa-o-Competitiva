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

int main(){
    std::string palavra;
    std::cin >> palavra;
    std::vector<int> checa = z_func(palavra);
    bool passou = false;
    for(int c = 0; c < palavra.size() - 1; c++){
        if(checa[palavra.size() - c - 1] != 0 && checa[palavra.size() - c - 1] == c + 1){
            if(passou){
                std::cout << ' ' << checa[palavra.size() - c - 1];
            }else{
                std::cout << checa[palavra.size() - c - 1];
                passou = true;
            }
            
        }
    }

    return 0;
}