#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    if (a1 + a2 + a3 >= 22)
        cout << "bust" << endl;
    else
        cout << "win" << endl;

    return 0;
}
