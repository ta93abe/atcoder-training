#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    ll n;
    cin >> n;

    ll sum = 0;
    ll pow = 0;

    rep(i, n)
    {
        ll a;
        cin >> a;
        sum += a;
        pow += a * a;
    }

    cout << n * pow - sum * sum << endl;

    return 0;
}
