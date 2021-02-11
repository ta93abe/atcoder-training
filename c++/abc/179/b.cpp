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
    int cnt = 0;
    rep(i, n)
    {
        int d1, d2;
        cin >> d1 >> d2;
        if (d1 == d2)
            cnt++;
        else
            cnt = 0;
        if (cnt == 3)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
