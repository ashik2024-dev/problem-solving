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
        int n;
        cin >> n;
        string S;
        cin >> S;

        int count0 = 0, count1 = 0;
        char prev = S[0];

        if (prev == '0')
            count0++;
        else
            count1++;

        for (int i = 1; i < n; i++)
        {
            if (S[i] != prev)
            {
                if (S[i] == '0')
                    count0++;
                else
                    count1++;
            }
            prev = S[i];
        }

        cout << min(count0, count1) << endl;
    }

    return 0;
}
