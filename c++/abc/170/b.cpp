#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int x, y;
    cin >> x >> y;
    int c = 4 * x - y;
    int t = y - 2 * x;

    if (c >= 0 and t >= 0 and c % 2 == 0 and t % 2 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
