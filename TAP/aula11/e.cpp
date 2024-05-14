#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#define db double

int main(){
    db a, b;
    db x1, x2, v1, v2;
    cin >> a >> b;
    x1 = (6*a + 4*b + sqrt((6*a + 4*b)*(6*a + 4*b) - 72*a*b))/36;
    x2 = (6*a + 4*b - sqrt((6*a + 4*b)*(6*a + 4*b) - 72*a*b))/36;
    v1 = (a - 2*x1)*(b - 3*x1)*(x1)/2;
    v2 = (a - 2*x2)*(b - 3*x2)*(x2)/2;
    if(v1 > v2){
        cout << fixed << setprecision(8) << x1 << " " << v1 << "\n";
    }else{
        cout << fixed << setprecision(8) << x2 << " " << v2 << "\n";
    }

    return 0;
}