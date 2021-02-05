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
    int w[n];

    int sum = 0;

    rep(i, n)
    {
        cin >> w[i];
        sum += w[i];
    }

    int diff = 100001;

    for (int i = 0; i < n; ++i)
    {
        int index_sum = 0;
        for (int j = 0; j <= i; ++j)
        {
            index_sum += w[j];
        }

        diff = min(diff, abs(index_sum - (sum - index_sum)));
    }

    cout << diff << endl;

    return 0;
}
