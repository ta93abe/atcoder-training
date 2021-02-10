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

    int l[n];
    rep(i, n) cin >> l[i];

    int cnt = 0;

    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            for (int k = j + 1; k < n; ++k)
            {
                if (l[i] == l[j] or l[j] == l[k] or l[k] == l[i])
                    continue;
                if (l[i] + l[j] <= l[k] or l[j] + l[k] <= l[i] or l[k] + l[i] <= l[j])
                    continue;
                cnt++;
            }
    cout << cnt << endl;
    return 0;
}
