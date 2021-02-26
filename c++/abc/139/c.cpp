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
    ll h[n];
    rep(i, n) cin >> h[n - i];
    ll ans = 0, cnt = 0;

    rep(i, n - 1)
    {
        if (h[i] <= h[i + 1])
        {
            cnt++;
        }
        else
        {
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    cout << ans << endl;
    return 0;
}
