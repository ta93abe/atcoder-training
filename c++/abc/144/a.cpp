#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a < 10 and b < 10)
        cout << a * b << endl;
    else
        cout << -1 << endl;

    return 0;
}
