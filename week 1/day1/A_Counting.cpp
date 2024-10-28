#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    if (a > b)
    {
        cout << "0" << endl;
    }
    else
    {
        int x = 0;
        for (int i = a; i <= b; i++)
        {
            x++;
        }
        cout << x << endl;
    }
    return 0;
}