#include <cstdio>
#include <cstring>

using namespace std;

int main(){
    char aba[20];
    scanf("%[^\n]%*c", aba);
    for(int c = 0; c < strlen(aba); c++){
        
        if(!(c % 2)){
            aba[c] += 5;
        }else{
            aba[c] -= 3;
        }
        
        /*
        if(!(c % 2)){
            aba[c] -= 5;
        }else{
            aba[c] += 3;
        }
        */
        
        
        
        
    }

    printf("%s\n%ld", aba, strlen(aba));
    return 0;
}

/*

flower


*/