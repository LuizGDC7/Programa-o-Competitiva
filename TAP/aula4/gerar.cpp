#include <iostream>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    cout << 100000 << endl;
    for(int c = 1; c <= 100000; c++){
        cout << c << endl;
    }

    return 0;
}