#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << max(a - c, max(a - d, max(b - c, b - d))) << endl;

    return 0;
}
