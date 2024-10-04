#include <bits/stdc++.h>
using namespace std;

int check(string s1, string s2)
{
    int n = s1.size();
    for (int i = 0; i < n; i++)
    {
        if (toupper(s1[i]) < toupper(s2[i]))
        {
            return -1;
        }
        else if (toupper(s1[i]) > toupper(s2[i]))
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int ans = check(s1, s2);
    cout << ans << endl;
    // cout << toupper('b') << endl;
    // cout << toupper('H') << endl;
    return 0;
}