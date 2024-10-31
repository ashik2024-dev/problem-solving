#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int a, b, t;
    cin >> a >> b >> t;
    double T = t + 0.5;

    int tb = 0;

    int time = a;

    while (time <= T)
    {
        tb += b;
        time += a;
    }

    cout << tb << "";
    return 0;
}