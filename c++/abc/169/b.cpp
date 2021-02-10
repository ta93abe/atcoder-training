#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;
const ll TEN = 1000000000000000000;

int main()
{
    ll n;
    cin >> n;

    ll a[n];

    ll ans = 1;
    rep(i, n)
    {
        ll x;
        cin >> x;
        if (x == 0)
        {
            cout << 0 << endl;
            return 0;
        }
        a[i] = x;
    }

    rep(i, n)
    {
        if (a[i] <= TEN / ans)
            ans *= a[i];
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << ans << endl;

    return 0;
}
