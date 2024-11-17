#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int x, y;
    cin >> x >> y;
    if ((x - y) >= 18)
    {
        cout << "RCB" << endl;
    }
    else
    {
        cout << "CSK" << endl;
    }
    return 0;
}