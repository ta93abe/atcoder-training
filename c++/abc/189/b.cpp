#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    ll n, x;
    cin >> n >> x;
    x *= 100;
    ll cnt = 0;
    rep(i, n)
    {
        ll v, p;
        cin >> v >> p;
        cnt += v * p;
        if (cnt > x)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}
