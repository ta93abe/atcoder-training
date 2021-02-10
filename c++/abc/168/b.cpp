#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int k;
    string s;
    cin >> k >> s;

    if (s.length() <= k)
        cout << s << endl;
    else
        cout << s.substr(0, k) << "..." << endl;

    return 0;
}
