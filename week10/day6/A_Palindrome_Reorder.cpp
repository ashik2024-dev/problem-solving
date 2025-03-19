#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    string a;
    cin >> a;
    string first, last, middle;
    vector<int> arr(26, 0);
    for (int i = 0; i < a.size(); i++)
    {
        arr[a[i] - 'A']++;
    }
    int odd_count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] % 2 != 0)
            odd_count++;
    }
    int odd_index_val, odd_index;
    if (odd_count > 1)
        cout << "NO SOLUTION" << endl;
    else
    {
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] % 2 == 0 && arr[i] != 0)
            {
                for (int j = 1; j <= arr[i] / 2; j++)
                {
                    first += i + 'A';
                    last += i + 'A';
                }
            }
            else if (arr[i] % 2 != 0 && arr[i] != 0)
            {
                odd_index = i;
                odd_index_val = arr[i];
            }
        }
        for (int i = 0; i < odd_index_val; i++)
        {
            middle += odd_index + 'A';
        }
        reverse(last.begin(), last.end());
        string ans;
        if (middle.size() > 0)
        {
            ans = first + middle + last;
        }
        else
        {
            ans = first + last;
        }
        cout << ans;
    }
    return 0;
}