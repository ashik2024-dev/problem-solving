#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;
while (t--)
{
    ll a,b,n,s;
    cin>>a>>b>>n>>s;
    ll x = s/n;
    ll coins = min(a,x);
    ll remain  = s - (coins*n);

    if (remain <= b)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }
    
}

  return 0;
}