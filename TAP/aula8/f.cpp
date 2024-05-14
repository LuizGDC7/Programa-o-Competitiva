#include <iostream>
#include <limits.h>

using namespace std;

#define humb long long

humb n_11 = 39916800;

int main(){
    humb res = 1;
    int L;
    cin >> L;

    for(int c = L - 1; c > L - 12; c--){
        res *= c;
    }

    res /= n_11;

    cout << res << "\n";

    return 0;
}