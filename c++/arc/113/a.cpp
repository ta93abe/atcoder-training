#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    ll k;
    cin >> k;
    int cnt = 0;
    for (int a = 1; a <= k; ++a)
        for (int b = 1; b <= k; ++b)
            cnt += k / (a * b);

    cout << cnt << endl;
    return 0;
}
