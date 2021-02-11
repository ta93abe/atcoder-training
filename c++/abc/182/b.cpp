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
    int a[n];
    rep(i, n) cin >> a[i];

    int ans = 0;
    int k = 0;

    for (int i = 2; i <= 1000; ++i)
    {
        int cnt = 0;
        for (int j = 0; j < n; ++j)
        {
            if (a[j] % i == 0)
                cnt++;
        }
        if (cnt > ans)
        {
            ans = cnt;
            k = i;
        }
    }
    cout << k << endl;
    return 0;
}
