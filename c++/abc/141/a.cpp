#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

int main()
{
    string s;
    cin >> s;

    if (s == "Sunny")
        cout << "Cloudy" << endl;
    else if (s == "Cloudy")
        cout << "Rainy" << endl;
    else
        cout << "Sunny" << endl;

    return 0;
}
