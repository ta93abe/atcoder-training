#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    ll n, a, b;
    cin >> n >> a >> b;

    cout << (n / (a + b)) * a + min(n % (a + b), a) << endl;

    return 0;
}
