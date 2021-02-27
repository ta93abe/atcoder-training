#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    ll n;
    cin >> n;
    ll ans = 10000000000;
    bool ok = false;
    rep(i, n)
    {
        ll a, p, x;
        cin >> a >> p >> x;
        if (x - a > 0)
        {
            ok = true;
            ans = min(ans, p);
        }
    }
    if (ok)
        cout << ans << endl;
    else
        cout << -1 << endl;

    return 0;
}
