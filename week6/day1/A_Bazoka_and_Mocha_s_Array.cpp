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
    int n;
    cin>>n;
    vector<ll> list(n);
    for (int i = 0; i < n; i++)
    {
        cin>>list[i];
    }
    vector<ll> listJoin(2*n);
    for (int i = 0; i < n; i++)
    {
        listJoin[i] = list[i];
        listJoin[i+n] = list[i];
    }
    
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        bool sorted = true;
        for (int j = i; j < i+n-1; j++)
        {
            if (listJoin[j+1]<listJoin[j])
            {
                sorted = false;
                break;
            }
            
        }
        if (sorted)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout<<"Yes"<<endl;
    }else
    {
        cout<<"No"<<endl;
    }
}

  return 0;
}
