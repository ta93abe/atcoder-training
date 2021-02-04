#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int x, y;
    cin >> x >> y;

    if (abs(x - y) < 3)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
