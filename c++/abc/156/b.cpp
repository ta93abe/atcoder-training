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
    int k;
    cin >> n >> k;

    int digits = 0;
    while (n > 0)
    {
        n /= k;
        digits++;
    }

    cout << digits << endl;

    return 0;
}
