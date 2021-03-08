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
    int min_a = 100001;
    int min_b = 100001;
    int sum_ab = 200001;

    rep(i, n)
    {
        ll a, b;
        cin >> a >> b;
        if (a < min_a)
            min_a = a;
        if (b < min_b)
            min_b = b;
        if (a + b < sum_ab)
            sum_ab = a + b;
    }

    cout << min(max(min_a, min_b), sum_ab) << endl;

    return 0;
}
