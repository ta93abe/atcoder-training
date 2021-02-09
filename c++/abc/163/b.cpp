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

    ll a_sum = 0;
    rep(i, m)
    {
        ll a;
        cin >> a;
        a_sum += a;
    }

    if (n >= a_sum)
        cout << n - a_sum << endl;
    else
        cout << -1 << endl;

    return 0;
}
