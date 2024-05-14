#include <iostream>

using namespace std;

int main(){

    int *p = new int[40];

    for(int c = 0; c < 40; c++){
        p[c] = c;
    }

    cout << p[5] << "\n";

    delete[] p;

    return 0;
}

