#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int n, d;
    cin >> n >> d;

    vector<vector<int>> x(n, vector<int>(d));
    rep(i, n) rep(j, d) cin >> x[i][j];

    int ans = 0;
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
        {
            int length = 0;
            for (int k = 0; k < d; ++k)
            {
                int diff = abs(x[i][k] - x[j][k]);
                length += diff * diff;
            }
            bool flag = false;
            rep(k, length + 1) if (k * k == length) flag = true;
            if (flag)
                ans++;
        }
    cout << ans << endl;

    return 0;
}
