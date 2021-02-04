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

    while (n > 0)
    {
        if (n % 10 == 7)
        {
            cout << "Yes" << endl;
            return 0;
        }
        n /= 10;
    }

    cout << "No" << endl;
    
    return 0;
}
