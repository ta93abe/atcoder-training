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

    if (n % 2 == 0)
    {
        cout << 0.5 << endl;
    }
    else
    {
        float ans = (float(n) + 1) / (2 * float(n));
        printf("%.7f", ans);
    }

    return 0;
}
