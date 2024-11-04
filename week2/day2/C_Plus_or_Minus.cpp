#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a, b, c;
     for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;

        if (a + b == c)
        {
            cout << "+" << endl;
        }
        else if (a - b == c)
        {
            cout << "-" << endl;
        }
    }

    return 0;
}