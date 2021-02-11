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
    string s;
    cin >> n >> x >> s;

    rep(i, n)
    {
        if (s[i] == 'o')
            x++;
        else
        {
            if (!x)
                continue;
            x--;
        }
    }
    cout << x << endl;
    return 0;
}
