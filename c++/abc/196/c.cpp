#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

ll getDigit(ll n)
{
    return log10(n) + 1;
}

int main()
{
    ll n;
    cin >> n;

    ll cnt = 0;

    for (ll i = 1; i <= n; i++)
    {
        ll m = getDigit(i);
        if (m % 2 == 0)
        {
            ll a = i / pow(10, m / 2);
            ll b = i - a * pow(10, m / 2);
            if (a == b)
                cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
