#include <iostream>

using namespace std;

int main(){
    int v[6] = {0, 0, 0, 0, 0, 0}, q2 = 0, q1 = 0;
    int a, b;
    for(int c = 0; c < 3; c++){
        cin >> a >> b;
        v[a]++, v[b]++;
    }

    for(int c = 1; c < 5; c++){
        if(v[c] == 1){
            q1++;
        }else if(v[c] == 2){
            q2++;
        }
    }

    if(q1 == 2 && q2 == 2){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    
    return 0;
}