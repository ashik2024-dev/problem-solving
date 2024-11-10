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
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
        
    }
    int gcd = A[0];
    for (int i = 1; i < n; i++)
    {
        gcd = __gcd(gcd, A[i]);
    }

    bool possible = true;
    for (int i = 0; i < n; i++)
    {
        if (A[i]% gcd != 0)
        {
            possible = false;
            break;
        }
    }

    if (possible)
    {
        cout<<"YES"<<endl;
    } else
    {
        cout<<"NO"<<endl;
    }
    
    
    
    

    
    
   
    
}

  return 0;
}