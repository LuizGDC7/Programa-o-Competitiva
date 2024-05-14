#include <bits/stdc++.h>

#define ll long long

using namespace std;

#define maximum (const long long) 1e6 + 10

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    char word[maximum], last;
    int qtd = 1, size, greatest = 1;

    cin >> word;
    last = word[0];
    size = strlen(word);
    for(int c = 1; c < size; c++){
        if(word[c] == last){
            qtd++;
        }
        if(word[c] != last || c == size - 1){
            if(qtd > greatest){
                greatest = qtd;
            }
            last = word[c];
            qtd = 1;
        }
    }

    cout << greatest << "\n";


    return 0;
}