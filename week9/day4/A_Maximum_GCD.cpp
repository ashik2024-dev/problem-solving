#include<bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    // cout<<__gcd(22,44)<<endl;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=3){
            cout<<1<<endl;
            continue;
        }
        
        int ans1=0,ans2=0;
        
        if(n%2==0){
            for(int i=n-1;i>=2;i--){
                if(n%i==0){
                    ans1 = __gcd(n,i);
                    break;
                }
            }
        }else{
            n--;
            for(int i=n-1;i>=1;i--){
                if(n%i==0){
                    ans2 = __gcd(n,i);
                    break;
                }
            }
        }
        
        cout<<max(ans1,ans2)<<endl;
    }

    return 0;
}