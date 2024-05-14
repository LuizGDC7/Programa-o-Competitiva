#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x, y, qtd;
    cin >> qtd;

    while (qtd--)
    {
        cin >> x >> y;

        if (x == y)
        {
            cout << x * x - (x - 1) << "\n";
        }
        else if (x > y)
        {
            if (!(x % 2))
            {
                cout << x * x - (y - 1) << "\n";
            }
            else
            {
                cout << (x - 1) * (x - 1) + y << "\n";
            }
        }
        else
        {
            if (y % 2)
            {
                cout << y * y - (x - 1) << "\n";
            }
            else
            {
                cout << (y - 1) * (y - 1) + x << "\n";
            }
        }
    }
    return 0;
}