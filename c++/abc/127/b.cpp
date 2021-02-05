#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int r, d, x;
    cin >> r >> d >> x;

    rep(i, 10)
    {
        x = r * x - d;
        cout << x << endl;
    }

    return 0;
}
