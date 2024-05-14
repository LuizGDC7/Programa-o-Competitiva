#include <iostream>
#include <map>
#include <set>

using namespace std;

int boom(map<int, set<int>> &ble, int num, int index, bool had){
    
    if(ble[num].empty()){
        return 0;
    }

    auto it = ble[num].find(index);
    auto it2 = ble[num - 1].upper_bound(index);
    int nova = -1;
    if(it2 != ble[num - 1].end()){
        nova = *it2;
    }

    if(had){

        if(nova != -1){
            ble[num].erase(it);
            //ble[num - 1].erase(it2);
            return 0 + boom(ble, num - 1,  nova, true);
        }else{
            ble[num].erase(it);
            return 0;
        }
    }else{

        if(nova != -1){
            ble[num].erase(it);
            //ble[num - 1].erase(it2);
            return 1 + boom(ble, num - 1, nova, true);
        }else{
            ble[num].erase(it);
            return 1;
        }
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, set<int>> arrows;
    int n, qtd = 0, bla;
    cin >> n;

    for(int c = 0; c < n; c++){
        cin >> bla;
        arrows[bla].insert(c);
    }

    for(auto c = arrows.rbegin(); c != arrows.rend(); c++){
        while(!c->second.empty()){
            qtd += boom(arrows, c->first, *c->second.begin(), false);
        }
    }

    cout << qtd << "\n";

    return 0;
}

/*

guardar os números numa map e associar a cada número um set
Percorrer o map de traz pra frente, e pegar um indice
Pegar o número a frente e pegar um índice a frente
Contiunar

*/