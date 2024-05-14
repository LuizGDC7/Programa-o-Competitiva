#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

#define maximum 1000100

int main(){
    char word[maximum], last;
    int changes[maximum];
    int i, j, queries, change, size, start, end, bli = 1;

    while(scanf("%[^\n]%*c", word) != EOF){
        if(!strcmp(word, "")){
            break;
        }
        size = strlen(word);
        last = word[0], changes[0] = change = 0;
        for(int c = 1; c < size; c++){
            if(word[c] != last){
                last = word[c];
                change++; 
            }
            changes[c] = change;
        }
        scanf("%d%*c", &queries);
        printf("Case %d:\n", bli);
        for(int c = 0; c < queries; c++){
            scanf("%d %d%*c", &i, &j);
            start = min(i, j);
            end = max(i, j);
            if(!(changes[end] - changes[start])){
                printf("Yes\n");
            }else{
                printf("No\n");
            }
        }
        bli++;


    }

    return 0;
}