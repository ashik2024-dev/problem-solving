#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int i,j,k,n,p,m;
        string str;
        cin>>n;
        int arr[n],arr1[n];
        for(i=0;i<n;i++)cin>>arr[i];
        for(i=0;i<n;i++){
            cin>>k>>str;
            p=arr[i];
            for(j=k-1;j>=0;j--){
                if(str[j]=='D'){
                    if(p==9)p=0;
                    else p+=1;
                    //cout<<p<<endl;
                }
                else{
                    if(p==0)p=9;
                    else p-=1;
                    //cout<<p<<endl;
                }
                //cout<<p<<endl;
            }
            //cout<<p<<endl;
            arr1[i]=p;
        }
        for(i=0;i<n;i++)cout<<arr1[i]<<" ";
        cout<<endl;
    }
}