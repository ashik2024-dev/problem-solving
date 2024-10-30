#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int T;
    cin >> T;
    map<string, int> name;

    for (int i = 0; i < T; ++i)
    {
        string userName;
        cin >> userName;

        if (userName.length() > 32)
        {
            return 0;
        }
        else
        {
            if (name.count(userName) == 0)
            {
                name[userName] = 0;
                cout << "OK" << endl;
            }
            else
            {

                int nmbr = ++name[userName];
                // cout << "Nmbr:" << nmbr << endl;
                string NewName = userName + to_string(nmbr);
                while (name.count(NewName) > 0)
                {
                    nmbr++;
                    NewName = userName + to_string(nmbr);
                }
                name[NewName] = 0;
                cout << NewName << endl;
            }
        }
    }

    return 0;
}
