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
        int n;
        cin >> n;
        int ar[n + 5];
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }

        sort(ar, ar + n);
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int val = ar[i];
            if (mp[ar[i]] != 0)
            {
                ans++;
               while (mp[val]>0)
               {
                mp[val]--;
                val++;
               }
               
            }
        }
        cout << ans << endl;
    }

    return 0;
}