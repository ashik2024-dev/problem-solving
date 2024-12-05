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
        int x, y;
        cin >> x >> y;

        int a = (y + 1) / 2;

        int m = max(0, (a * 15) - (y * 4));

        int b = 0;
        if (x > m)
        {
            b = (x - m + 14) / 15;
        }

        int totalScreens = a + b;

        cout << totalScreens << endl;
    }

    return 0;
}
