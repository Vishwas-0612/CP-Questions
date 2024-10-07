#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    int cnt = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] == s[i])
        {
            cnt++;
        }
        else
        {
            if (cnt >= 7)
            {
                return true;
            }
            cnt = 1;
        }
    }
    if (cnt >= 7)
    {
        return true;
    }
    return false;
}
int main()
{
    string s;
    cin >> s;

    if (check(s))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}