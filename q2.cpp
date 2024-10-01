#include <bits/stdc++.h>
using namespace std;

string check(string s, int size)
{
    string ans;
    if (size > 10)
    {
        ans.push_back(s[0]);
        ans += to_string(size - 2);
        ans.push_back(s[size - 1]);
        return ans;
    }
    return s;
}
int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;
        int size = s.size();
        string ans = check(s, size);
        cout << ans << endl;
    }
    return 0;
}