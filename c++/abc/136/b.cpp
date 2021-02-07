#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    ll n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        if (to_string(i).size() % 2 == 1)
            cnt++;

    cout << cnt << endl;

    return 0;
}
