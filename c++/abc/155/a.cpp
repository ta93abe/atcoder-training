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

    if (a == b and a != c)
    {
        cout << "Yes" << endl;
    }
    else if (a == c and a != b)
    {
        cout << "Yes" << endl;
    }
    else if (b == c and a != b)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
