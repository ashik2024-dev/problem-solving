#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n,cnt=0;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n;i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    map<int, int> mp;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
        mx = max(mx, mp[v[i]]);
    }
    cout << mx;
    return 0;
}