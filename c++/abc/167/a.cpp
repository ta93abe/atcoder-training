#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    string s, t;
    cin >> s >> t;

    t.pop_back();

    if (s == t)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
