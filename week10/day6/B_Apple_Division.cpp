#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s += arr[i];
    }
    int dp[n + 1][s + 1];
    dp[0][0] = 1;
    for (int i = 1; i <= s; i++)
        dp[0][i] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (s >= arr[i - 1])
                dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    vector<int> v;
    for (int j = 0; j <= s; j++)
    {
        if (dp[n][j])
        {
            v.push_back(j);
        }
    }
    int mn = INT_MAX;
    for (int i : v)
    {
        int s1 = i;
        int s2 = s - s1;
        mn = min(mn, abs(s1 - s2));
    }
    cout << mn << endl;
    return 0;
}