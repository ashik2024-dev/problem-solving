#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    vector<int> new_num;
    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] == x)
        {
            new_num.push_back(num[i]);
        }
    }

    for (int i = 0; i < new_num.size(); i++)
    {
        cout << new_num[i] << " ";
    }
    

    return 0;
}
