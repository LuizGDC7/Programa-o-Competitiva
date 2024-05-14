#include <bits/stdc++.h>

using namespace std;

#define ll long long

int pos(string &word){
    char p1 = word[0], p2 = word[word.size() - 1];
    if(word[0] == word[word.size() - 1] && word[0] == '0'){
        return 0;
    }else if(word[0] == word[word.size() - 1] && word[0] == '1'){
        return 1;
    }
    return 2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    string palavra;
    cin >> t;
    while(t--){
        cin >> palavra;
        int blocos[3] = {0, 0, 0}, index = 0; // full zero, full um, zeros seguidos de uns
        string bloco = "";
        for(int c = 0; c < palavra.size(); c++){
            if(c != 0){
                if(bloco[index] != palavra[c] && bloco[index] == '1'){
                    blocos[pos(bloco)]++;
                    bloco = "";
                    index = 0;
                }else if(bloco[index] != palavra[c] && bloco[index] == '0'){
                    index = bloco.size();
                }
            }
            
            bloco.push_back(palavra[c]);  

            if(c == palavra.size() - 1){
                blocos[pos(bloco)]++;
            }    
        }

        cout << blocos[0] + blocos[1] + (blocos[2] > 1 ? (blocos[2] * 2 - 1) : blocos[2]) << "\n";
    }
    return 0;
}