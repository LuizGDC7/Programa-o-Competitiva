#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    char word[10];
    int x, qtda, qtdb;
    cin >> x;
    for(int c = 0; c < x; c++){
        cin >> word;
        qtda = qtdb = 0;
        for(auto ble: word){
            if(ble == 'A'){
                qtda++;
            }
            if(ble == 'B'){
                qtdb++;
            }
        }
        if(qtda > qtdb){
            cout << "A\n";
        }else{
            cout << "B\n";
        }
    }

    return 0;
}