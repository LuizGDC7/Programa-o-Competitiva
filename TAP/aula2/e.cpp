#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    string word, pattern, temp;
    int maior = 0, iguais;

    cin >> word;
    cin >> pattern;
    temp = pattern;
    

    for(int i = 0; i + pattern.size() <= word.size(); i++){
        iguais = 0;
        for(int i2 = 0; i2 < pattern.size(); i2++){
            if(word[i+i2] == pattern[i2]) iguais++;
        }

        if(iguais > maior) maior = iguais;
    }

    cout << pattern.size() - maior << endl;

    return 0;
}