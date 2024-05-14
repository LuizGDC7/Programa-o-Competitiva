#include <cstdio>
#include <cstring>

using namespace std;

#define ll long long

int main(){
    char name[82], bla[82];
    int n, m, greatest, qtd, bli = 1;
    double p, gp;
    bool first = true;
    while(1){
        scanf("%d %d%*c", &n, &m);
        //cin >> n >> m;
        gp = __INT_MAX__, greatest = 0;

        if(!n && !m){
            break;
        }

        for(int c = 0; c < n; c++){
            fgets(bla, 82, stdin);
        }

        for(int c = 0; c < m; c++){
            fgets(bla, 81, stdin);
            scanf("%lf %d%*c", &p, &qtd);
            if(qtd >= greatest){
                if(qtd == greatest){
                    if(p < gp){
                        strcpy(name, bla);
                        gp = p;
                    }
                }else{
                    strcpy(name, bla);
                    gp = p;
                }
                greatest = qtd;
            }

            for(int d = 0; d < qtd; d++){
                fgets(bla, 82, stdin);
            }

        }

        if(first){
            first = !first;
        }else{
            printf("\n");
        }

        printf("RFP #%d\n", bli);
        printf("%s", name);

        /*
        cout << "RFP #" << bli << "\n";
        cout << name << "\n\n";
        */

        bli++;
    }

    return 0;
}