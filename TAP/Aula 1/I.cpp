#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int n, m, auxx, auxy;
    cin >> n >> m;
    long absolutax = 0, absolutay = 0;
    vector<long> eixos_x(n-1);
    vector<long>eixos_y(m-1);
    int anterior, atual;
    cin >> anterior; // primeira do eixo x
    for(int c = 0; c < eixos_x.size(); c++){
        cin >> atual;
        eixos_x[c] = abs(atual - anterior);
        anterior = atual;
    }
    cin >> anterior;
    for(int c = 0;c < eixos_y.size(); c++){
        cin >> atual;
        eixos_y[c] = abs(atual - anterior);
        anterior = atual;
    }
    for(int auxx = eixos_x.size(), c = 0; c < eixos_x.size(); c++){
        absolutax += (c + 1)*(auxx - c)*eixos_x[c];
    }
    for(int auxy = eixos_y.size(), c = 0; c < eixos_y.size(); c++){
        absolutay += (c + 1)*(auxy - c)*eixos_y[c];
    }

    cout << (absolutax*absolutay)%(1000000000 + 7) << endl;
    /*
    cout << endl;
    cout << "Printando os armazenados:" << endl;
    for(int c = 0; c < eixos_x.size(); c++){
        cout << eixos_x[c] << ' ';
    }
    cout << endl;
    for(int c = 0; c < eixos_y.size(); c++){
        cout << eixos_y[c] << ' ';
    }
    */
    return 0;
}
