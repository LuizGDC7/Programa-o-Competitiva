#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void erastothenes_sieve(vector<char> &primes, int limit){
    primes[0] = 0;
    primes[1] = 0;
    for(int c = 2; c * c <= limit; c++){
        if(primes[c] == 1){
            for(int d = c * c; d <= limit; d += c){
                primes[d] = 0;
            }
        }
    }
}

bool sieve(vector<char> &primes, int num){
    return (bool) primes[num];
}

vector<int> conjecture(vector<char> &primes, vector<char> &calculated, int limit){
    vector<int> retorno;
    for(int c = 1; c * c * c * c <= limit; c++){
        int y4 = c * c * c * c;
        for(int d = 0; d * d <= limit; d++){
            int actual = y4 + d * d;
            if(actual <= limit){
                if(calculated[actual] == 0){
                    calculated[actual] = 1;
                    if(sieve(primes, actual)){
                        retorno.push_back(actual);
                    }
                }
            }
        }
    }
    sort(retorno.begin(), retorno.end());
    return retorno;
}

int main(){
    int maximum = 1e7 + 1;
    vector<char> primes(maximum, 1);
    vector<char> primes_calculated(maximum, 0);
    erastothenes_sieve(primes, maximum);
    vector<int> qtd_primes = conjecture(primes, primes_calculated, maximum);
    
    int n;
    cin >> n;
    while(n--){
        int teste_case;
        cin >> teste_case;
        cout << upper_bound(qtd_primes.begin(), qtd_primes.end(), teste_case) - qtd_primes.begin() << '\n';
    }
    
    return 0;
}