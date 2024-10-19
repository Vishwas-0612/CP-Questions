#include <bits/stdc++.h>
using namespace std;

int check(string s, int n)
{
    vector<int> v(n + 1);
    unordered_map<int, int> m;
    int flag = 0;
    v[0] = flag;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '<')
        {
            flag += 1;
        }
        else
        {
            flag -= 1;
        }
        v[i + 1] = flag;
    }
    int cnt = 0;
    for (int i = 0; i < n + 1; i++)
    {
        m[v[i]]++;
        if (m[v[i]] == 1)
        {
            cnt++;
        }
    }
    return cnt;
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

        int ans = check(s, n);
        cout << ans << endl;
    }
    return 0;
}