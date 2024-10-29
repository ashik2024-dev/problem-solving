#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int N;
    string result = "";
    cin >> N;

    if (N < 10)
    {
        result = "000" + to_string(N);
        cout << result << " ";
    }
    else if (N < 100)
    {
        result = "00" + to_string(N);
        cout << result << " ";
    }
    else if (N < 1000)
    {
        result = "0" + to_string(N);
        cout << result << " ";
    }
    else
    {
        result = to_string(N);
        cout << result << " ";
    }

    return 0;
}