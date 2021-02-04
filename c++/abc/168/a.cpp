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
    n %= 10;
    if (n == 3)
        cout << "bon" << endl;
    else if (n == 0 or n == 1 or n == 6 or n == 8)
        cout << "pon" << endl;
    else
        cout << "hon" << endl;
    return 0;
}
