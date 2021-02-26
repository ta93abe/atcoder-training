#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    string s;
    cin >> s;

    string ans = "Yes";

    rep(i, s.size())
    {
        if (i % 2 == 1 and s[i] > 95)
            ans = "No";
        if (i % 2 == 0 and s[i] < 95)
            ans = "No";
    }

    cout << ans << endl;

    return 0;
}
