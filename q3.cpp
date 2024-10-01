#include <bits/stdc++.h>
using namespace std;

vector<int> check(int n)
{
    if (n % 2 == 0)
    {
        return {-1};
    }
    vector<int> v(n);
    int mid = (n - 1) / 2;
    v[mid] = 1;
    int j = n;
    int k = 2;
    for (int i = 0; i < n; i++)
    {
        if (i < mid)
        {
            v[i] = j;
            j -= 2;
        }
        else if (i > mid)
        {
            v[i] = k;
            k += 2;
        }
    }
    return v;
}

void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> ans = check(n);
        display(ans);
        // for (int i = 0; i < ans.size(); i++)
        // {
        //     cout << ans[i] << " ";
        // }
        // cout << endl;
    }
    return 0;
}