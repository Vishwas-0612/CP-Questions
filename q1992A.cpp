#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int cnt = 5;
        int mx;
        while (cnt--)
        {
            mx = min(a, min(b, c));
            if (mx == a)
            {
                a++;
            }
            else if (mx == b)
            {
                b++;
            }
            else
            {
                c++;
            }
        }
        cout << a * b * c << endl;
    }
    return 0;
}