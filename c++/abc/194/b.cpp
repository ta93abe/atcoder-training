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

    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];

    int ans = 200001;
    rep(i, n) rep(j, n) ans = min(ans, i == j ? a[i] + b[j] : max(a[i], b[j]));

    cout << ans << endl;

    return 0;
}
