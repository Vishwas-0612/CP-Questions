#include <bits/stdc++.h>
using namespace std;

int check(string s, int n)
{
    int cnt = 0;
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            cnt += 1;
        }
        else
        {
            flag = max(cnt, flag);
            cnt = 0;
        }
        // cnt = max(cnt, flag);
    }
    flag = max(cnt, flag);
    return flag + 2;
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