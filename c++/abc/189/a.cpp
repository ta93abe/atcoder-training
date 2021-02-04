#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    char c1, c2, c3;
    cin >> c1 >> c2 >> c3;

    if (c1 == c2 and c1 == c3)
        cout << "Won" << endl;
    else
        cout << "Lost" << endl;

    return 0;
}
