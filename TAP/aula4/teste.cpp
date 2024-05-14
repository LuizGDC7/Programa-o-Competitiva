#include <iostream>
#include <vector>

using namespace std;

int main(){
    char val1 = 65;
    cout << val1 << endl;
    vector<char> vet = {0, 1, 0, 1};
    for(int c = 0 ; c < vet.size(); c++){
        if(vet[c]){
            cout << (bool) vet[c] << endl;
        }
        
    }
    return 0;
}