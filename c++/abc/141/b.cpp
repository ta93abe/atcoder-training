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

    for (int i = 0; i < s.length(); ++i)
    {
        if (i % 2 == 0 and (s[i] == 'R' or s[i] == 'U' or s[i] == 'D'))
            continue;
        if (i % 2 == 1 and (s[i] == 'L' or s[i] == 'U' or s[i] == 'D'))
            continue;
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;

    return 0;
}
