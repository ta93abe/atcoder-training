#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;

    int a[n], b[n], c[n - 1];
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    rep(i, n - 1) cin >> c[i];

    int ans = 0;

    for (int i = 0; i < n; ++i)
    {
        ans += b[a[i] - 1];
        if (i == 0)
            continue;
        if (a[i] - a[i - 1] == 1)
            ans += c[a[i] - 2];
    }

    cout << ans << endl;

    return 0;
}
