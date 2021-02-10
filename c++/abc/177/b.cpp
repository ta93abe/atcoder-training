#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    string s, t;
    cin >> s >> t;

    int ans = 10000;
    rep(i, s.length() - t.length() + 1)
    {
        int cnt = 0;
        for (int j = i; j < i + t.length(); ++j)
        {
            if (s[j] != t[j - i])
                cnt++;
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}
