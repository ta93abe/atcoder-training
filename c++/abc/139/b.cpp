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

    int ans = 0;
    int outlet = 1;

    while (outlet < b)
    {
        outlet += a - 1;
        ans++;
    }
    cout << ans << endl;

    return 0;
}
