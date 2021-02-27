#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    double a, b;
    cin >> a >> b;
    printf("%.3f", (a - b) / a * 100);

    return 0;
}
