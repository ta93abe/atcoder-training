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

    int a[n], b[n];
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    int ans = 0;
    rep(i, n) ans += a[i] * b[i];
    if (ans)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

    return 0;
}
