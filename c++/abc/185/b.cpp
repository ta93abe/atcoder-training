#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    ll n, t;
    int m;
    cin >> n >> m >> t;
    ll ma = n;
    int end = 0;
    rep(i, m)
    {
        ll a, b;
        cin >> a >> b;
        n -= a - end;
        if (n <= 0)
        {
            cout << "No" << endl;
            return 0;
        }
        n = min(ma, n + b - a);
        end = b;
    }

    n -= t - end;

    if (n <= 0)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
    return 0;
}
