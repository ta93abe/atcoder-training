#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    ll n;
    cin >> n;

    map<string, int> m{
        {"AC", 0},
        {"WA", 0},
        {"TLE", 0},
        {"RE", 0},
    };

    rep(i, n)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    cout << "AC x " << m["AC"] << endl;
    cout << "WA x " << m["WA"] << endl;
    cout << "TLE x " << m["TLE"] << endl;
    cout << "RE x " << m["RE"] << endl;

    return 0;
}
