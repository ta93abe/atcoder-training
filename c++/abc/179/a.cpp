#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    string s;
    cin >> s;

    if (s.substr(s.length() - 1) == "s")
    {
        cout << s << "es" << endl;
    }
    else
    {
        cout << s << "s" << endl;
    }

    return 0;
}
