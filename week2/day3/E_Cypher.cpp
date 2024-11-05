#include <bits/stdc++.h>
#define ll long long
using namespace std;

int findInitialDigit(int finalDigit, const string &moves)
{
    int currentDigit = finalDigit;
    for (char move : moves)
    {
        if (move == 'U')
        {
            currentDigit = (currentDigit - 1 + 10) % 10;
        }
        else if (move == 'D')
        {
            currentDigit = (currentDigit + 1) % 10;
        }
    }
    return currentDigit;
}
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

        vector<int> finalDigits(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> finalDigits[i];
        }

        vector<int> initialDigits(n);
        for (int i = 0; i < n; ++i)
        {
            int movesCount;
            string moves;
            cin >> movesCount >> moves;

            initialDigits[i] = findInitialDigit(finalDigits[i], moves);
        }

        for (int i = 0; i < n; ++i)
        {
            cout << initialDigits[i] << " ";
        }
        cout << endl;
    }

    return 0;
}