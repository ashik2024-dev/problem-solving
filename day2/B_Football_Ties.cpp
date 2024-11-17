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
        int scoreX = x % 3;
        int scoreY = y % 3;

        cout << min(scoreX, scoreY) << endl;
    }

    return 0;
}