#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    int s;
    cin >> s;

    int a = s / 100, b = s % 100;

    if ((1 <= a and a <= 12) and (1 <= b and b <= 12))
    {
        cout << "AMBIGUOUS" << endl;
    }
    else if (1 <= a and a <= 12)
    {
        cout << "MMYY" << endl;
    }
    else if (1 <= b and b <= 12)
    {
        cout << "YYMM" << endl;
    }
    else
    {
        cout << "NA" << endl;
    }

    return 0;
}
