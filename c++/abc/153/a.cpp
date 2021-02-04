#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int h, a;
    cin >> h >> a;

    cout << (h + (a - 1)) / a << endl;

    return 0;
}
