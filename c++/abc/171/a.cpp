#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    char alpha;
    cin >> alpha;

    if (65 <= alpha and alpha <= 90)
    {
        cout << "A" << endl;
    }
    else
    {
        cout << "a" << endl;
    }
    return 0;
}
