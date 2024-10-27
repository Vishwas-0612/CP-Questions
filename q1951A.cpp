#include <bits/stdc++.h>
using namespace std;

bool check(string s, int n)
{
    unordered_map<char, int> m;
    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }

    if (n == 1 && s[0] == '0')
    {
        return true;
    }
    if (n == 2 && m['1'] == 2)
    {
        return false;
    }
    if (m['1'] % 2 == 0)
    {
        if (m['1'] == 2)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] == '1' && s[i + 1] == '1')
                {
                    return false;
                }
            }
            return true;
        }
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool ans = check(s, n);
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}