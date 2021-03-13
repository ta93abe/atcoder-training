#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    ll n, k;
    cin >> n >> k;

    double ans = 0;

    for (int i = 1; i <= n; i++)
    {
        double tmp = 1.0 / n;
        ll now = i;
        while (now < k)
        {
            now *= 2;
            tmp /= 2;
        }
        ans += tmp;
    }
    printf("%.10f", ans);
    return 0;
}
