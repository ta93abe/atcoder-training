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

    for (int i = 1; i < 10; ++i)
        for (int j = 1; j < 10; ++j)
            if (i * j == n)
            {
                cout << "Yes" << endl;
                return 0;
            }
    cout << "No" << endl;
    return 0;
}
