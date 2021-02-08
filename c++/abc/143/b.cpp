#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    int d[n];
    rep(i, n) cin >> d[i];

    int sum = 0;

    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            sum += d[i] * d[j];

    cout << sum << endl;

    return 0;
}
