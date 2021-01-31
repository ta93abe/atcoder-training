#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;

    s[k - 1] = s[k - 1] + 32;

    cout << s << endl;

    return 0;
}
