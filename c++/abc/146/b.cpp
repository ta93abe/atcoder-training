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
    string s;
    cin >> n >> s;

    rep(i, s.length()) s[i] = char((s[i] - 'A' + n) % 26 + 'A');
    cout << s << endl;

    return 0;
}
