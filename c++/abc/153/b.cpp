#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    ll h, n;
    cin >> h >> n;

    int sum = 0;
    rep(i, n)
    {
        int a;
        cin >> a;
        sum += a;
    }

    if (sum >= h)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
