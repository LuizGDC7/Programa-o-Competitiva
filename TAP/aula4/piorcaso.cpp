#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> casos(n + 2, vector<int>(0));
    int caso;
    for(int c = 1; c <= n; c++){
        cin >> caso;
        casos[caso].push_back(c);
    }

    int qtd = 1e5;

    for(int c = n; c > 0 && qtd > 0; c--){
        if(casos[c].size() > 0){
            for(int d = casos[c].size() - 1; d >= 0; d--){
                qtd--;
                cout << casos[c][d] << endl;
            }
        }
    }


    return 0;
}