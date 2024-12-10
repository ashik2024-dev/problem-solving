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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        map<int, int> abc;
        for (int i = 0; i < n; i++)
        {
            abc[a[i]]++;
        }

        int L = -1, R = -1;
        int l = -1, r;
        for (int i = 0; i < n; i++)
        {
            if (abc[a[i]] < k)
                continue;
            if (l == -1)
            {
                l = a[i];
            }
            if (i == n - 1 || a[i + 1] - a[i] > 1 || abc[a[i + 1]] < k)
            {
                r = a[i];
                if (r - l >= R - L)
                {
                    R = r;
                    L = l;
                }
                l = -1, r = -1;
            }
        }
        if (L == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << L << " " << R << endl;
        }
    }
    return 0;
}