#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int n, r;
    cin >> n >> r;

    if (n < 10)
    {
        cout << r + 100 * (10 - n) << endl;
    }
    else
    {
        cout << r << endl;
    }

    return 0;
}
