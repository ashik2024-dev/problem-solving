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

        vector<int> list(n);
        priority_queue<int> hero;

        for (int i = 0; i < n; i++)
        {
            cin >> list[i];
        }

        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            if (list[i] > 0)
            {
                hero.push(list[i]);
            }else
            {
                if (!hero.empty())
                {
                    total = total+hero.top();
                    hero.pop();
                }
                
            }
            
        }
        cout << total <<endl;
    }

    return 0;
}