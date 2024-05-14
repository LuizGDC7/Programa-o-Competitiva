#include <iostream>
#include <vector>

using namespace std;

#define ll long long

ll mdc(ll a, ll b){
    return b == 0 ? a : mdc(b, a % b);
}

ll mmc(ll a, ll b){
    return a * (b / mdc(a,b));
}

const int max_qtd = (20*21)/2;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll> nums;
    for(int c = 2; c <= 42; c++){
        nums.push_back(c);
    }
    vector<ll> div;
    vector<ll> div_formers;

    for(int c = 1; c <= nums.size(); c++){
        for(int d = 0; d <= nums.size() - c; d++){
            ll new_div = 1;
            for(int e = d; e < d + c ; e++){
                new_div = mmc(new_div, nums[e]);
            }
            div.push_back(new_div);
            div_formers.push_back(nums[d] == 2 ? c + 1 : c);
        }

    }
   
    long long cases, num, greatest;
    cin >> cases;
    for(int c = 0; c < cases; c++){
        cin >> num;
        greatest = 1;
        for(int c = 0; c < div.size();c++){
            if(num % div[c] == 0 && div_formers[c] > greatest){
                greatest = div_formers[c];
            }
        }
        cout << greatest << "\n";
    }
    
 
    return 0;
}