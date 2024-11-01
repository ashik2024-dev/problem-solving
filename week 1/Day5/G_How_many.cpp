#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int s, p;
    cin >> s >> p;

    int SumCount = 0;
    for (int i = 0; i <= s; i++)
    {
        for (int j = 0; j <= s; j++)

            for (int k = 0; k <= s; k++)
            {
                if ((i + j + k <= s) && (i * j * k <= p))
                {
                    SumCount++;
                }
            }
    }
    
    cout << SumCount << endl;

    return 0;
}