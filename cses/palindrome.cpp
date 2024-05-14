#include <bits/stdc++.h>

#define ll long long

using namespace std;

int chars[27];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string word;
    char the_one;
    int k, qtdpares = 0, qtdimpares = 0, qtdtheone;

    cin >> word;

    for(auto h: word){
        chars[h - 'A']++;
    }

    for(int c = 0; c < 27; c++){
        qtdpares += (chars[c] % 2 == 0 ? 1 : 0);
        qtdimpares += (chars[c] % 2 == 1 ? 1 : 0);
    }

    if(qtdimpares > 1){
        cout << "NO SOLUTION\n";
        return 0;
    }

    if(word.size() % 2){
        for(int c = 0; c < 27; c++){
            if(chars[c] % 2){
                the_one = 'A' + c;
                qtdtheone = chars[c];
                chars[c] = 0;
            }
        }
    }

    for(int c = 0; c < 27; c++){
        k = chars[c] / 2;
        while(k--){
            cout << (char) ('A' + c);
            chars[c]--;
        }
    }

    if(word.size() % 2){
        while(qtdtheone--){
            cout << the_one;
        }
    }

    for(int c = 26; c >= 0; c--){
        while(chars[c]--){
            cout << (char) ('A' + c);
        }
    }

    cout << "\n";

    return 0;
}