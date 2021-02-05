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

    pair<pair<string, int>, int> restaurants[n];
    rep(i, n)
    {
        string s;
        int p;
        cin >> s >> p;

        restaurants[i].first.first = s;
        restaurants[i].first.second = -p;
        restaurants[i].second = i + 1;
    }

    sort(restaurants, restaurants + n);
    rep(i, n)
    {
        cout << restaurants[i].second << endl;
    }
    return 0;
}
