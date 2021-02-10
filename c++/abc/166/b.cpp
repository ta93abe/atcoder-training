#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<bool> ans(n, false);
    rep(i, k)
    {
        int d;
        cin >> d;
        rep(j, d)
        {
            int a;
            cin >> a;
            ans[a - 1] = true;
        }
    }

    int cnt = 0;
    for (auto x : ans)
        if (!x)
            cnt++;

    cout << cnt << endl;

    return 0;
}
