#include <stdio.h>
#include <string.h>

using namespace std;

char nomes[12][20];
int total[12];

int index(char c1[], char c2[][20], int size){
    for(int c = 0; c < size; c++){
        if(strcmp(c1, c2[c]) == 0){
            return c;
        }
    }
    return -1;
}

int main(){
    int qtd;
    char on = 1;
    while(scanf("%d%*c", &qtd) != EOF){
        if(on == 1){
            on = 0;
        }else{
            printf("\n");
        }
    
        for(int c = 0; c < qtd; c++){
            total[c] = 0;
            strcmp(nomes[c], "");
        }
    
        for(int c = 0; c < qtd; c++){
            scanf("\n%s", nomes[c]);
        }
        for(int c = 0; c < qtd; c++){
            char bla[20], bla2[20];
            int grana;
            int qtd2;

            scanf("%s %d %d", bla, &grana, &qtd2);
            //total[index(bla, nomes, qtd)] -= grana;
            total[index(bla, nomes, qtd)] -= (qtd2 == 0 ? grana : (grana/qtd2)*qtd2);
            /*if(qtd2){
                total[index(bla, nomes, qtd)] += grana - (grana/qtd2)*qtd2 ;
            }*/
            for(int d = 0; d < qtd2; d++){
                scanf("\n%s", bla2);
                total[index(bla2, nomes, qtd)] += grana / qtd2;//((grana + 0.0) / qtd2 - grana / qtd2 ? grana/qtd2 + 1 : grana/qtd2);
            }
        }
        for(int c = 0; c < qtd; c++){
            printf("%s %d\n", nomes[c], total[c]);
        }
    }

    return 0;
}