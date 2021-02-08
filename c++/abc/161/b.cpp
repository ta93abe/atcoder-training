#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int n, m;
    cin >> n >> m;

    int sum_a = 0, cnt = 0;
    int a[n];
    rep(i, n)
    {
        cin >> a[i];
        sum_a += a[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (a[i] * 4 * m < sum_a)
            continue;
        cnt++;
    }

    if (cnt >= m)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
