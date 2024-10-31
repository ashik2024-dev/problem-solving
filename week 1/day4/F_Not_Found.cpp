#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    string s;
    cin >> s;

    set<char> letters;

    for (char c : s)
    {
        letters.insert(c);
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        if (letters.find(i) == letters.end())
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << "None" << endl;

    return 0;
}