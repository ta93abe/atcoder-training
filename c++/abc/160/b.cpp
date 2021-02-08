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

    cout << (x / 500) * 1000 + ((x % 500) / 5) * 5 << endl;
    return 0;
}
