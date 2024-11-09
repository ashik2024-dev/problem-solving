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
        int n, m;
        cin >> n >> m;
        string str;
        cin >> str;

        set<int> st;

        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }

        string update;
        cin >> update;
        sort(update.begin(), update.end());
        int idx = 0;
        for (auto it : st)
        {
            str[it - 1] = update[idx];
            idx++;
        }
        cout << str << endl;
    }

    return 0;
}