#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int k, a, b;
    cin >> k >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (i % k == 0)
        {
            cout << "OK" << endl;
            return 0;
        }
    }

    cout << "NG" << endl;

    return 0;
}
