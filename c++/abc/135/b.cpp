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

    rep(i, n) if (p[i] != i + 1) cnt++;

    if (cnt == 0 or cnt == 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
