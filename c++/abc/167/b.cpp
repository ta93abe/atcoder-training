#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    ll a, b, c, k;
    cin >> a >> b >> c >> k;

    if (k <= a + b)
        cout << min(a, k) << endl;
    else
        cout << a - (k - a - b) << endl;

    return 0;
}
