#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int wsize = 2e5 + 10;

pair<bool, int> auxiliary(map<char, int> &cars, int d){
    if(cars.size() > 2){
        return pair<bool, int>(false, 0);
    }

    if(cars.size() == 1){
        return pair<bool, int>(true, 0);
    }

    auto ble = cars.begin();
    auto fe = ble++;

    if(ble->second == 1 && fe->second == d - 1 || fe -> second == 1 && ble ->second){
        return pair<bool, int>(true, 1);
    }

    return pair<bool, int>(false, 2);
}

int solve(char* word, int sizew){
    int errors;
    bool ok;
    for(int c = 1; c < sizew; c++){
        
        if(sizew % c){
            continue;
        }

        errors = 0;
        ok = true;

        map<int, map<char, int>> ind;


        for(int d = 0; d < sizew; d++){
            ind[d % c][word[d]]++;
            if(ind[d % c].size() > 2){
                ok = false;
                break;
            }
        }

        if(!ok){
            continue;
        }

        for(int d = 1; d <= c; d++){
            pair<bool, int> ret = auxiliary(ind[d%c], sizew / c);
            
            errors += ret.second;

            if(!(ret.first) || errors > 1){
                ok = false;
                break;
            }
        }

        if(ok){
            return c;
        }
        
    }
    return sizew;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    char word[wsize];
    int qtd, sizem;
    scanf("%d%*c", &qtd);
    while(qtd--){
        scanf("%d%*c", &sizem);
        scanf("%s%*c", word);
        printf("%d\n", solve(word, sizem));
    }


    return 0;
}