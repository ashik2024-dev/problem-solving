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
        string line;
        cin >> n >> line;

        vector<int> counts(n, 0);
        vector<int> gains(n, 0);
        ll a = 0;

        for (int i = 0; i < n; i++)
        {
            if (line[i] == 'L')
            {
                counts[i] = i;
            }
            else
            {
                counts[i] = n - i - 1; 
            }
            a += counts[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (line[i] == 'L')
            {
                gains[i] = (n - i - 1) - counts[i];
            }
            else
            {
                gains[i] = i - counts[i];
            }
        }

        sort(gains.rbegin(), gains.rend());

        ll v = a;
        vector<ll> results(n);
        for (int k = 1; k <= n; k++)
        {
            if (gains[k - 1] > 0)
            {
                v += gains[k - 1];
            }
            results[k - 1] = v;
        }

        for (int i = 0; i < n; i++)
        {
            cout << results[i] << " ";
        }
        cout << endl;
    }

    return 0;
}