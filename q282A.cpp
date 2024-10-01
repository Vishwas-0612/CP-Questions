#include <bits/stdc++.h>
using namespace std;

int check(vector<string> s)
{
    int x = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == "X++" || s[i] == "++X")
        {
            // cout << "yes";
            x = x + 1;
        }
        else if (s[i] == "--X" || s[i] == "X--")
        {
            x = x - 1;
        }
    }
    return x;
}
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }

    int ans = check(v);
    cout << ans << endl;
    return 0;
}