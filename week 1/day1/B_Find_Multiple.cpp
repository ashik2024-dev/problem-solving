#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << "-1" << endl;

    return 0;
}