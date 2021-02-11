#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int h, w;
    cin >> h >> w;

    int a[h][w];

    int mi = 101;
    rep(i, h) rep(j, w)
    {
        cin >> a[i][j];
        mi = min(mi, a[i][j]);
    }

    int cnt = 0;
    rep(i, h) rep(j, w) cnt += a[i][j] - mi;

    cout << cnt << endl;

    return 0;
}
