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

    int cnt = 0;
    for (int i = 0; i < n - 2; ++i)
    {
        if (s.substr(i, 3) == "ABC")
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
