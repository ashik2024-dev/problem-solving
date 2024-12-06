#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        reverse(v.begin(), v.end());

        while (!v.empty() && v.back() == 0) v.pop_back();

        if (v.empty())
        {
            cout << 0 << endl;
            continue;
        }
        ll flag = 0;
        reverse(v.begin(), v.end());
        n = v.size();
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] == 0)
            {
                flag++;
            }
            else
            {
                flag += v[i];
            }
        }
        cout << flag << endl;

    }
    return 0;
}
