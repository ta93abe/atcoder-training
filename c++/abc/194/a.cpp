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

    if (a + b >= 15 and b >= 8)
        cout << 1 << endl;
    else if (a + b >= 10 and b >= 3)
        cout << 2 << endl;
    else if (a + b >= 3)
        cout << 3 << endl;
    else
        cout << 4 << endl;

    return 0;
}
