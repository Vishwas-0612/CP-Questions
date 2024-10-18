#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            string s;
            int j = 0;
            while (j != (n / 2))
            {
                if (j % 2 == 0)
                {
                    s.append("AA");
                }
                else
                {
                    s.append("BB");
                }
                j++;
            }
            cout << "YES" << endl
                 << s << endl;
        }
    }
    return 0;
}