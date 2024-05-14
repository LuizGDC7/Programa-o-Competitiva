#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string word;

    cin >> n;
    for(int c = 0; c < n; c++){
        cin >> word;
        if(word.size() > 10){
            cout << word[0] << word.size() - 2 << word[word.size() - 1] << "\n";
        }else{
            cout << word << "\n";
        }
    }

    return 0;
}