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
    string s, t;
    cin >> n >> s >> t;

    rep(i, n) cout << s[i] << t[i];
    cout << endl;

    return 0;
}
