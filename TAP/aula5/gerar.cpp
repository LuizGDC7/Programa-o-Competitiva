#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cout << n << '\n';
    for(int c = 1;c <= n; c++){
        cout << c << '\n';
    }

    return 0;
}