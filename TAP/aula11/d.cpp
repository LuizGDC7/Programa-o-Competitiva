#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

#define ld long double

bool comp(ld a, ld b){
    return (a < b);
}

int main(){
    ld h, c, l;
    cin >> h >> c >> l;
    std::cout << fixed << setprecision(8) << min({c + l, sqrt((c + h)*(c + h) + (l + h)*(l + h)), sqrt(c*c + (l + 2*h)*(l + 2*h)), sqrt(l*l + (c + 2*h)*(c + 2*h))}, comp) << "\n"; 

    //std::cout << fixed << setprecision(8) << c + l << " " << sqrt((c + h)*(c + h) + (l + h)*(l + h)) << " " << sqrt(c*c + (l + 2*h)*(l + 2*h)) << " " << sqrt(l*l + (c + 2*h)*(c + 2*h)) << "\n"; 

    return 0;
}