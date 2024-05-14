#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n;
    vector<vector<int>> mat(n + 1, vector<int>(0));
    for(int c = 0; c < n - 1; c++){
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    for(auto a: mat){
        if(a.size() == n - 1){
            cout << "Yes\n";
            return 0;
        }
    }

    cout << "No\n";

    return 0;
}