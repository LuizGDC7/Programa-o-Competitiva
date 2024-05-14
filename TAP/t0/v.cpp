#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);
    char days[110], before;
    int size, f = 0, s = 0;
    scanf("%d%*c%s", &size, days);
    before = days[0];
    for(int c = 1; c < size; c++){
        if(before == 'F' && days[c] == 'S'){
            s++;
        }

        if(before == 'S' && days[c] == 'F'){
            f++;
        }

        before = days[c];
    }

    if(f > s){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}

/*

s  ++
f +++

*/