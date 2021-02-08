#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int a[3][3];
    rep(i, 3) rep(j, 3) cin >> a[i][j];

    int n;
    cin >> n;

    int b[n];
    rep(i, n) cin >> b[i];

    int bingo[3][3];

    rep(i, 3) rep(j, 3)
    {
        bingo[i][j] = false;
        rep(k, n) if (a[i][j] == b[k]) bingo[i][j] = true;
    }

    string ans = "No";

    rep(i, 3) if (bingo[i][0] and bingo[i][1] and bingo[i][2]) ans = "Yes";
    rep(i, 3) if (bingo[0][i] and bingo[1][i] and bingo[2][i]) ans = "Yes";
    if (bingo[0][0] and bingo[1][1] and bingo[2][2])
        ans = "Yes";
    if (bingo[0][2] and bingo[1][1] and bingo[2][0])
        ans = "Yes";

    cout << ans << endl;

    return 0;
}
