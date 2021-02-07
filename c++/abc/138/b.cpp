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

    float ans = 0;
    rep(i, n)
    {
        float a;
        cin >> a;

        ans += 1 / a;
    }
    ans = 1 / ans;
    printf("%.6f", ans);
    return 0;
}
