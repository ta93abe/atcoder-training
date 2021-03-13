#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    ll n, m;
    cin >> n >> m;

    ll mi = -1;
    ll ma = 10000001;

    rep(i, m)
    {
        ll l, r;
        cin >> l >> r;

        mi = max(mi, l);
        ma = min(ma, r);
    }
    if (mi <= ma)
        cout << ma - mi + 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}
