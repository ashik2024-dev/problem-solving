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
        vector<int> list(n);

        for (int i = 0; i < n; i++)
        {
            cin >> list[i];
        }

        int flag = 0;
        int l = 0;
        int r = n - 1;
        int mx = n;
        int mn = 1;
        while (r >= l)
        {
            if ((list[l] == mn && list[r] == mx) || (list[l] == mx && list[r] == mn))
            {
                l++;
                r--;
                mn++;
                mx--;
            }
            else if (list[r] == mx)
            {
                r--;
                mx--;
            }
            else if (list[r] == mn)
            {
                r--;
                mn++;
            }
            else if (list[l] == mx)
            {
                l++;
                mx--;
            }
            else if (list[l] == mn)
            {
                l++;
                mn++;
            }
            else
            {
                cout << l + 1 << " " << r + 1 << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}