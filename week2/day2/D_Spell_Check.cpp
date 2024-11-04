#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, s;
    cin >> n;
    string v;
    string name = "Timur";
    sort(name.begin(), name.end());

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        cin >> v;
        if (s != 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            sort(v.begin(), v.end());
            if (v == name)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
