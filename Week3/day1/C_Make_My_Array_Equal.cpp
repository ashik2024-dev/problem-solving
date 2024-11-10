#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int t;
cin>>t;

int flag = 0;
while (t--)
{
    int n;
    cin>>n;
    ll a[n];
    map<int,int> m;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if (a[i] != 0)
        {
            m[a[i]]++;
        }
    }
    if (m.size() == 1 ||m.size() == 0)
    {
        cout<<"YES"<<endl;
    }else
    {
     cout<<"NO"<<endl;   
    }

}

  return 0;
}
