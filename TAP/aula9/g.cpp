#include <iostream>
#include <vector>
#include <map>

using namespace std;

#define ll long long

struct initv{
    int v = -1;
};

typedef map<int, initv> mapa;

void index(mapa &mapa, int num, int *index_vet, vector<int> &solo){
    int index_m = mapa[num].v;
    if(index_m == -1){
        mapa[num].v = (*index_vet)++;
        solo.push_back(1);
    }else{
        solo[index_m]++;
    }
}

int fast_p(int n, int e){
    if(e == 0){
        return 1; 
    }
    int res = fast_p(n, e / 2);
    if(n % 2){
        return res * res * n;
    }else{
        return res * res;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_cases, n, number;
    cin >> test_cases;
    for(int c = 0; c < test_cases; c++){
        cin >> n;
        vector<int> solo;
        mapa indexes;
        int i = 0, res = 1;
        for(int c = 0; c < n; c++){
            cin >> number;
            index(indexes, number, &i, solo);
        }
        int nova = 0;
        for(int c = 0; c < solo.size(); c++){
            res *= 2;
            nova += (solo[c] - 1)*solo.size();
        }
        
        cout << res + nova << "\n";
    }

    return 0;
}