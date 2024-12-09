#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
ll t;
cin>>t;
while (t--)
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ll mx = -1e9, sum = 0, count = 0;
    for (ll i = 0; i < n; i++)
    {
        sum = sum+v[i];
        mx = max(mx,v[i]);
        if ((sum-mx) == mx)
        {
           count++;
        }
    }
    cout<<count<<endl;
}

  return 0;
}