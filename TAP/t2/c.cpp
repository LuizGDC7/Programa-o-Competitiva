#include <cstdio>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int solve(int mat[][503], char ver[][503], int y, int x, int n, int m){
    
    if(y == n - 1 && x == m - 1){
        return 0;
        ver[n - 1][m - 1] = 1;
    }
    
    if(y >= 0 && y < n && x >= 0 && x < m){ // 1 - calclou, 0 - n calculou, 2 - calculando
        if(ver[y][x] == 1){
            return mat[y][x];
        }

        if(ver[y][x] == 2){
            return n * m + 10;
        }

        ver[y][x] = 2;

        int k = mat[y][x]; 

        mat[y][x] = k + min({solve(mat, ver, y + k, x, n, m), /*solve(mat, ver, y - k, x, n, m), */solve(mat, ver, y, x + k, n, m), /*solve(mat, ver, y, x - k, n, m)*/});
        int val = mat[y][x];
        ver[y][x] = 1;
        return mat[y][x];
    }

    return n * m + 10;

}

int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(nullptr);
    int mat[503][503];
    char ver[503][503];
    int n, m;

    scanf("%d %d", &n, &m);
    for(int c = 0; c < n; c++){
        for(int d = 0; d < m; d++){
            scanf("%1d", &mat[c][d]);
            ver[c][d] = 0;
/*/
            if(mat[c][d] + c == n - 1 || mat[c][d] + d == m - 1){
                ver[c][d] = 1;
            }
            */
        }

    }
/*
    for(int c = 0 ; c < n; c++){
        for(int d = 0; d < m; d++){
            printf(" %3d%s", mat[c][d], (d == m - 1 ? "\n" : ""));
            //<< " " << mat[c][d] << ;
        }
    }

    printf("\n");
*/

    for(int c = n - 1; c >= 0; c--){
        for(int d = m - 1; d >= 0; d--){
            solve(mat, ver, c, d, n, m);
        }
    }

    int res = solve(mat, ver, 0, 0, n, m);

    for(int c = 0 ; c < n; c++){
        for(int d = 0; d < m; d++){
            printf(" %3d%s", mat[c][d], (d == m - 1 ? "\n" : ""));
            //<< " " << mat[c][d] << ;
        }
    }

    printf("%d\n", res > 0 && res <= n * m ? res : -1);

    return 0;
}