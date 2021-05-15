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

    vector<vector<int>> ss(m, vector<int>());
    rep(i, m)
    {
        int k;
        cin >> k;
        rep(j, k) cin >> ss[i][j];
    }

    vector<int> p(m);
    rep(i, m) cin >> p[i];

    return 0;
}
