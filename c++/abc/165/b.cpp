#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{

    ll x;
    cin >> x;

    ll n = 100, year = 0;

    while (n < x)
    {
        year++;
        n += n / 100;
    }

    cout << year << endl;

    return 0;
}
