#include <iostream>

using namespace std;

int main(){
    double v1, v2;
    cin >> v1 >> v2;
    double total = v2/v1;
    long long altura = 0;
    long long melancia = 1;
    long long index = 2;
    while(melancia <= total){
        altura++;
        melancia += ((1 + index)*(index))/2;
        index++;
    }

    cout << altura << "\n";
    return 0;
}