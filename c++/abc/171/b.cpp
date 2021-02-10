#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int n, k;
    cin >> n >> k;

    int p[n];
    rep(i, n) cin >> p[i];

    sort(p, p + n);

    int ans = 0;
    rep(i, k) ans += p[i];
    cout << ans << endl;

    return 0;
}
