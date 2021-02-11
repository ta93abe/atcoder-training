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

    pair<double, double> point[n];
    rep(i, n) cin >> point[i].first >> point[i].second;

    int cnt = 0;

    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
        {
            double d = (point[j].second - point[i].second) / (point[j].first - point[i].first);
            if (abs(d) <= 1)
                cnt++;
        }
    cout << cnt << endl;
    return 0;
}
