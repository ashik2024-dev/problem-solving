#include <bits/stdc++.h>
#define ll long long
using namespace std;

int longestKSubstr(string &s, int k)
{
    unordered_map<char, int> mp;
    int uniq = 0, l = 0, r = 0, ans = 0, n = s.size();
    while (r < n)
    {
        while (r < n)
        {
            if (mp[s[r]] == 0)
                uniq++;
            mp[s[r]]++;
            if (uniq > k)
                break;
            r++;
        }
        if (uniq >= k)
            ans = max(ans, r - l);
        if (r == n)
            break;
        while (l < n)
        {
            if (mp[s[l]] == 1)
                uniq--;
            mp[s[l]]--;
            if (uniq == k)
                break;
            l++;
        }
        l++, r++;
    }
    if (ans == 0)
        return -1;
    return ans;
    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(NULL);

        return 0;
    }