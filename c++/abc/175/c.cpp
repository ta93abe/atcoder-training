////////////////////////////// yet
#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    ll x, k, d;
    cin >> x >> k >> d;

    if (x < 0)
        x *= -1;

    if (x - k * d > 0)
        cout << x - k * d << endl;
    else
    {
        while (true)
        {
            x -= d;
            k--;
            if (x - d < 0)
                break;
        }
        if (k % 2 == 0)
            cout << x << endl;
        else
            cout << d - x << endl;
    }

    return 0;
}
