#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int a, b;
    cin >> a >> b;

    int ma = max(a, b);
    int mi = min(a, b);

    rep(i, ma) cout << mi;
    cout << endl;

    return 0;
}
