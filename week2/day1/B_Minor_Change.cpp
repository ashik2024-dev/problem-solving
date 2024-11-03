#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;

    int count = 0;

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
        {
            count++;
        }
    }

    cout << count;

    return 0;
}