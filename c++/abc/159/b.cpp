#include <bits/stdc++.h>
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using namespace atcoder;
typedef long long ll;
using P = pair<int, int>;

bool is_palindrome(string s)
{
    string t(s.rbegin(), s.rend());
    return s == t;
}

int main()
{
    string s;
    cin >> s;

    int a = (s.length() - 1) / 2;
    int b = (s.length() + 1) / 2;

    if (is_palindrome(s) and is_palindrome(s.substr(0, a)) and is_palindrome(s.substr(b)))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
