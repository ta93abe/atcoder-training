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
    cin >> n;

    rep(i, n)
    {
        int a;
        cin >> a;
        if (a % 2 == 1)
            continue;
        if (a % 3 == 0 or a % 5 == 0)
            continue;
        cout << "DENIED" << endl;
        return 0;
    }

    cout << "APPROVED" << endl;

    return 0;
}
