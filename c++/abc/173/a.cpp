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

    n %= 1000;

    if (n == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1000 - n << endl;
    }

    return 0;
}
