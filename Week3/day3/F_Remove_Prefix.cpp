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

        vector<int> num(n);

        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }

        int l = n;
        set<int> list;
        for (int i = (n - 1); i >= 0; i--)
        {
            if (list.count(num[i]))
            {
                break;
            }
            list.insert(num[i]);
            l = i;
        }
        cout << l << endl;
    }

    return 0;
}