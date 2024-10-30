#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int T;
    cin >> T;
    map<string, int> list;

    for (int i = 0; i < T; i++)
    {
        string name;
        cin >> name;

        bool allLowerCase = true;
        for (char c : name)
        {
            if (!islower(c))
            {
                allLowerCase = false;
                return 0;
            }
        }

        if (name.length() > 100)
        {
            return 0;
        }
        else
        {
            if (list.count(name) == 0)
            {
                list[name] = 0;
                cout << "NO" << endl;
            }
            else
            {
                ++list[name];
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}