#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int n, x;
    cin >> n >> x;
    int l[n + 1];
    l[0] = 0;
    rep(i, n) cin >> l[i + 1];

    int d = 0;
    int cnt = 0;
    rep(i, n + 1)
    {
        d += l[i];
        if (d <= x)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
