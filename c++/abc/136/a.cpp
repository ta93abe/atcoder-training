#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << max(0, c - (a - b)) << endl;

    return 0;
}
