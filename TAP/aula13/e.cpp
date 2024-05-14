#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    map <int, vector<int>> mapinha;
    int bla, id, solved;
    cin >> bla;
    for(int c = 0; c < bla; c++){
        cin >> id >> solved;
        mapinha[solved].push_back(id);
    }

    for(auto ble = mapinha.rbegin(); ble != mapinha.rend(); ble++){
        for(int c = 0; c < ble->second.size(); c++){
            cout << ble->second[c] << " " << ble->first << "\n"; 
        }
    }

    return 0;
}