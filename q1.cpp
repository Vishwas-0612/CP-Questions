#include <bits/stdc++.h>
using namespace std;

bool check(int a, int b)
{
    if (a == 0 || b == 0)
    {
        if (a == 0)
        {
            if (b % 2 == 0)
            {
                return true;
            }
            return false;
        }
        else
        {
            if (a % 2 == 0)
            {
                return true;
            }
            return false;
        }
    }
    else if ((a + (2 * b)) % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        bool ans = check(a, b);
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
