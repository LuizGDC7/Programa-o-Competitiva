#include <iostream>

#define ll long long

using namespace std;

ll ceil(double x){
    ll bla = (long long) x;
    if(x > bla){
        return bla + 1;
    }else{
        return bla;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll h, u, d, nova, unova, limit, q1, q2, bli;
    double f;

    while(1){
        cin >> h >> u >> d >> f;
        if(!h){
            break;
        }
        f = u * (f / 100);

        limit = u / f;

        if(u - f - d == 0){
            q1 = q2 = __LONG_LONG_MAX__;
        }else{
            q1 = ceil((h - d - f) / (u - d - f));
            q2 = ceil(-f / (u - f - d));
        }

        if(q1 <= limit && q1 > 0 && (q1 <= q2 || q2 <= 0)){
            cout << "success on day " << q1 << "\n";
            continue;
        }

        if(q2 <= limit && q2 > 0 && q2 <= q1){
            cout << "failure on day " << q2 << "\n";
            continue;
        }

        bli = limit + ceil((u * limit - (limit - 1) * f - limit * d) / (d));

        cout << "failure on day " << bli << "\n";

    }

    return 0;
}