#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    unordered_map<char, int> m;
    int n = s.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (m[s[i]] == 0)
        {
            m[s[i]]++;
            cnt++;
        }
    }
    if (cnt % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}