#include <bits/stdc++.h>
using namespace std;

vector<string> check(string s)
{
    string s1, s2, s3;
    int n = s.size();
    if (s[0] == s[1] || s[0] == 'b' && s[1] == 'a')
    {
        s1 = s[0];
        s2 = s[1];
        s3.assign(s.begin() + 2, s.end());
    }
    else
    {
        s1 = s[0];
        s2.assign(s.begin() + 1, s.end() - 1);
        s3 = s[n - 1];
    }
    return {s1, s2, s3};
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        vector<string> v = check(s);
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}