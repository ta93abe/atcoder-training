#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    ll n, x;
    cin >> n >> x;

    rep(i, n)
    {
        int a;
        cin >> a;
        if (a == x)
            continue;
        cout << a << " ";
    }
    cout << endl;

    return 0;
}
