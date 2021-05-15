#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

ll f(ll x, ll a, int t)
{
    if (t == 1)
        return x + a;
    else if (t == 2)
        return max(x, a);
    else
        return min(x, a);
}

int main()
{
    ll n;
    cin >> n;

    vector<pair<ll, int>> at(n);
    rep(i, n) cin >> at[i].first >> at[i].second;

    ll q;
    cin >> q;

    vector<ll> x(q);
    rep(i, q) cin >> x[i];

    rep(i, q)
    {
        }

    return 0;
}
