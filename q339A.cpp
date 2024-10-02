#include <bits/stdc++.h>
using namespace std;

string check(string s, int n)
{
    string spare;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            spare.push_back(s[i]);
        }
    }
    int size = spare.size();
    // for (int i = 0; i < size; i++)
    // {
    //     cout << spare[i] << " ";
    // }
    // cout << spare[0] << endl;
    for (int i = 0; i < size; i++)
    {
        int mini = i;

        for (int j = i; j < size; j++)
        {
            if (spare[mini] > spare[j])
            {
                swap(spare[mini], spare[j]);
            }
        }
    }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << spare[i] << " ";
    // }
    string ans;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            ans.push_back(spare[k]);
            k++;
        }
        else
        {
            ans.push_back('+');
        }
    }
    return ans;
}
int main()
{
    string s;
    cin >> s;

    string ans = check(s, s.size());
    cout << ans << endl;
    return 0;
}