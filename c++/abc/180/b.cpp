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

    ll manhattan = 0, chebyshev = 0;
    double euclid = 0;

    rep(i, n)
    {
        ll x;
        cin >> x;

        manhattan += abs(x);
        euclid += x * x;
        chebyshev = max(chebyshev, abs(x));
    }

    cout << manhattan << endl;
    cout << fixed << setprecision(10) << sqrt(euclid) << endl;
    cout << chebyshev << endl;

    return 0;
}
