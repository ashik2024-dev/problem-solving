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
        int l, q;
        cin >> l >> q;

        vector<int> list(l);
        map<int, pair<int, int>> line;

        for (int i = 0; i < l; i++)
        {
            cin >> list[i];
            if (line.find(list[i]) == line.end())
            {
                line[list[i]] = {i, i};
            }
            else
            {
                line[list[i]].second = i;
            }
        }
        for (int i = 0; i < q; i++)
        {
            int p1, p2;
            cin >> p1 >> p2;

            if (line.find(p1) != line.end() && line.find(p2) != line.end())
            {
                int x1 = line[p1].first;
                int x2 = line[p2].second;
                if (x1 < x2)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}