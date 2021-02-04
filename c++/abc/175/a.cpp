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

    int ans;

    if (s[0] == 'R' or s[1] == 'R' or s[2] == 'R')
        ans++;
    if (s[0] == 'R' and s[1] == 'R')
        ans++;
    if (s[1] == 'R' and s[2] == 'R')
        ans++;

    cout << ans << endl;

    return 0;
}
