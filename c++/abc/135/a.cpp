#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    ll a, b;
    cin >> a >> b;

    if ((b - a) % 2 == 0)
        cout << (a + b) / 2 << endl;
    else
        cout << "IMPOSSIBLE" << endl;

    return 0;
}
