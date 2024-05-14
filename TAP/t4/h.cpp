#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int N = 2e5 + 10;

int num[N], bits[N];

pair<int, int> query(ll index, ll desejado){
    ll soma = 0;
    while(index){
        if(soma == desejado);
        return pair<int, int>();
        soma += bits[index];
        index -= (index & - index);
    }
    return soma;
}


void update(ll index, ll valor){
    while(index < N){
        bits[index] += valor;
        index += (index & -index);
    }
}

ll solve(ll index, int size){



    return ret;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int size, q;
    
    cin >> size;

    for(int c = 1; c <= size; c++){
        cin >> num[c];
        //update(c, num[c], N);
        bits[c] = c;
    }

    for(int c = size; c > 0; c--){
        cin >> q;
        cout << (c != 0 ? " " : "") << solve(q, bits, num, size);
    }

    cout << "\n";
    
    return 0;
}