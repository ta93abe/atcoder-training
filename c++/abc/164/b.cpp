#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int taka = (a + (d - 1)) / d;
    int ao = (c + (b - 1)) / b;

    if (taka + 1 > ao)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
