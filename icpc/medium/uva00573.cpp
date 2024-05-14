//#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    long long h, u, d, c;
    double f;
    bool sucess;
    bool first = true;
    while(1){
        scanf("%lld %lld %lld %lf", &h, &u, &d, &f);
        if(!h)
            break;
        double total = 0;
        f = (u * f)/100;
        //limite = ((double) u / (double) f);
        for(c = 1; ; c++){
            total += ((u - f*(c - 1)) >= 0 ? u - f * (c - 1) : 0);
            printf("c: %lld | total up: %10.5lf | u = %lf | f = %lf\n", c, total, ((u - f*(c - 1)) >= 0 ? u - f * (c - 1) : 0), f);
            if(total > h){
                sucess = true;
                break;
            }

            total -= d;
            printf("c: %lld | total do: %10.5lf\n", c, total);


            if(total < 0){
                sucess = false;
                break;
            }
            
            
        }
        
        if(sucess){
            printf("success on day %lld\n", c);
        }else{
            printf("failure on day %lld\n", c);
        }
        printf("\n");
    }
    return 0;
}