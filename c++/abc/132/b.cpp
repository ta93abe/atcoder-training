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

    int p[n];
    rep(i, n) cin >> p[i];
    int cnt = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        if ((p[i - 1] < p[i] and p[i] < p[i + 1]) or (p[i - 1] > p[i] and p[i] > p[i + 1]))
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}
