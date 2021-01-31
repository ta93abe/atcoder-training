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

    if (s[0] == s[1] or s[1] == s[2] or s[2] == s[3])
        cout << "Bad" << endl;
    else
        cout << "Good" << endl;

    return 0;
}
