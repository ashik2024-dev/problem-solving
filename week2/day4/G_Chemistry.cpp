#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> freq(26, 0);

        for (char c : s)
        {
            freq[c - 'a']++;
        }
        for (int i = 0; i < 26 && k > 0; i++)
        {
            if (freq[i] % 2 != 0)
            {
                freq[i]--;
                k--;
            }
        }

        int oddCount = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 != 0)
            {
                oddCount++;
            }
        }
        if (oddCount <= 1)
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