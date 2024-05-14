#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#define ll long long

int main(){
    string s1, s2;
    int sum1 = 0, sum2 = 0, dk = 0;
    
    cin >> s1 >> s2;
    for(int c = 0; c < s1.size(); c++){
        if(s1[c] == '+'){
            sum1++;
        }else{
            sum1--;
        }
        switch(s2[c]){
            case '+':
                sum2++;
                break;
            case '-':
                sum2--;
                break;  
            case '?':
                dk++;
                break;    
        }
    }
    
    if(dk){
        if((abs(sum1 - sum2) <= dk) && abs(abs(sum1 - sum2) - dk)%2 == 0){
            ll total = (1<<dk), atual = 1, mais = abs(sum1 - sum2) + (dk - abs(sum1 - sum2))/2;
            for(int c = 2; c <= dk; c++){
                atual *= c;
            }

            for(int c = 2; c <= mais; c++){
                atual /= c;
                
            }
            for(int c = 2; c <= dk - mais; c++){
                atual /= c;
            }
            /*
            for(ll c = dk, qtd = 0; c > 1; c--, qtd++){
                if(qtd < abs(sum1 - sum2)){
                    atual *= 2;
                }
                total *= 2;
            }
            */
            cout << fixed << setprecision(12) << ((double) atual) / ((double) total) << "\n";
        }else{
           cout << fixed << setprecision(12) << (double) 0.0 << "\n";
        }
    
    }else{
        if(sum1 == sum2){
            cout << fixed << setprecision(12) << (double) 1.0 << "\n";
        }else{
            cout << fixed << setprecision(12) << (double) 0.0 << "\n";
        }
    }

    return 0;
}