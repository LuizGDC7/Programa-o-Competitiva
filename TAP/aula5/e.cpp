#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int test_cases, left, right, a;
    cin >> test_cases;
    while(test_cases--){
        cin >> left >> right >> a;
        int minimun_range = (right/a)*a - 1; 
        if(minimun_range >= left && minimun_range/a + minimun_range % a >= right / a + right % a){
            cout << minimun_range/a + minimun_range % a << '\n'; 
        }else{
            cout << right / a + right % a  << '\n';
        }
    }
    
    return 0;
}