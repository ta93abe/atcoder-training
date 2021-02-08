#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int n, k, m;
    cin >> n >> k >> m;
    int sum_a = 0;
    rep(i, n - 1)
    {
        int a;
        cin >> a;
        sum_a += a;
    }
    if (k >= n * m - sum_a)
        cout << max(n * m - sum_a, 0) << endl;
    else
        cout << -1 << endl;
    return 0;
}
