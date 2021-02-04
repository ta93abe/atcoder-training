#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int s, w;
    cin >> s >> w;

    if (w >= s)
        cout << "unsafe" << endl;
    else
        cout << "safe" << endl;

    return 0;
}
