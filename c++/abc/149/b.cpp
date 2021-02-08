#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    ll a, b, k;
    cin >> a >> b >> k;

    if (k <= a)
        cout << a - k << " " << b << endl;
    else if (a < k and k <= a + b)
        cout << 0 << " " << b - (k - a) << endl;
    else
        cout << 0 << " " << 0 << endl;
    return 0;
}
