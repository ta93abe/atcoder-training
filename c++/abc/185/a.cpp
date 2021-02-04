#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    cout << min(a1, min(a2, min(a3, a4))) << endl;

    return 0;
}
