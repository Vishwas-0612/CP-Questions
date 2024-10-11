#include <bits/stdc++.h>
using namespace std;

vector<string> check(string s)
{
    int n = s.size();
    vector<string> v;
    string s1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i = i + 2;
            if (s1.size() != 0)
            {
                v.push_back(s1);
                s1 = "";
            }
            continue;
        }
        else
        {
            s1.push_back(s[i]);
        }
    }
    v.push_back(s1);

    return v;
}
int main()
{
    string s;
    cin >> s;

    vector<string> ans = check(s);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}