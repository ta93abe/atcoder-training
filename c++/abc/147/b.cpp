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

    int cnt = 0;

    for (int i = 0; i < s.length() / 2; ++i)
    {
        if (s[i] == s[s.length() - 1 - i])
            continue;
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}
