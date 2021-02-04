#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    string s, t, u;
    int a, b;
    cin >> s >> t >> a >> b >> u;

    if (s == u)
        cout << a - 1 << " " << b << endl;
    else
        cout << a << " " << b - 1 << endl;

    return 0;
}
