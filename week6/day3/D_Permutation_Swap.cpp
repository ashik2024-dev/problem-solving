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
  ll m;
  cin>>m;
  vector<ll> v;
  map<ll, ll> x,y;
  for (ll i = 1; i <= m; i++)
  {
    ll z;
    cin>>z;
    v.push_back(z);
    x[z] = i;
    y[i] = z;
  }

  ll mx = 0;
  for (ll i = m; i >= 1; i--)
  {
    ll index = x[i];
    if (i != index)
    {
      ll dif = abs(i - index);
      mx = __gcd(mx,dif);
    }
    
  }
  cout<<mx<<endl;
}

  return 0;
}