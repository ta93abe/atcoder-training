#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    double v, t, s, d;
    cin >> v >> t >> s >> d;

    if (t <= d / v and d / v <= s)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

    return 0;
}
