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
    ll ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (i % 3 == 0 or i % 5 == 0)
            continue;
        ans += i;
    }

    cout << ans << endl;

    return 0;
}
