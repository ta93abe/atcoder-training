#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int n, x, t;
    cin >> n >> x >> t;

    cout << t * ((n + (x - 1)) / x) << endl;

    return 0;
}
