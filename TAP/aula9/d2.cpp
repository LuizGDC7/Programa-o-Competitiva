#include <iostream>
#include <vector>

using namespace std;

int main(){

     vector<int> letras(26, 0);
     string palavra;
     int n;
     cin >> n >> palavra;
     for(int c = 0; c < palavra.size(); c++){
        letras[palavra[c] - 'a']++;
     }
     vector<int> nova;
     for(int c = 0; c < letras.size(); c++){
        if(letras[c] != 0){
            nova.push_back(letras[c]);
        }
     }
        int mult = 1, soma = 0;
     for(int c = 0; c < nova.size() - 1; c++){
        mult *= 2;
        soma += nova[c];

     }

     cout << mult*soma - 1 << "\n";

    return 0;
}