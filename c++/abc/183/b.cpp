#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    double sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;

    cout << fixed << setprecision(7) << sx + sy * (gx - sx) / (gy + sy) << endl;

    return 0;
}
