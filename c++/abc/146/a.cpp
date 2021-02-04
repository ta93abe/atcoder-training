#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

vector<string> WEEK = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

int main()
{

    string s;
    cin >> s;

    rep(i, 7)
    {
        if (s == WEEK[i])
        {
            cout << 7 - i << endl;
            break;
        }
    }

    return 0;
}
