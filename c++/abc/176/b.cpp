#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    string n;
    cin >> n;

    ll cnt = 0;

    rep(i, n.length()) cnt += n[i] - '0';

    if (cnt % 9 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
