#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    ll n,cnt=0;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int j = 1;
    for (auto i : v)
    {
        if (i >= j)
            j++;
    }
    cout << j-1;
    return 0;
}