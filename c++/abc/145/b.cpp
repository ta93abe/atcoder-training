#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    if (n % 2 == 1)
    {
        cout << "No" << endl;
        return 0;
    }

    if (s.substr(0, n / 2) == s.substr(n / 2))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
