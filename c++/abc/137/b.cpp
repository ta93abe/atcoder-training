#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int k, x;
    cin >> k >> x;

    for (int i = x - k + 1; i < x + k; ++i)
        cout << i << " ";

    cout << endl;
    return 0;
}
