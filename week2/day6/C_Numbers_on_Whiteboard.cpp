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
    vector<int> list;
    for (int i = 1; i <= n; i++)
    {
        list.push_back(i);
    }
    vector<int> result;

    while (size(list)>1)
    {
        int s = size(list);
        int sum = list[s-1]+list[s-2];
        result.push_back(list[s-1]);
        result.push_back(list[s-2]);
        list.pop_back();
        list.pop_back();

        if (sum%2 == 1)
        {
            list.push_back(sum/2+1);
        }else
        {
            list.push_back(sum/2);
        }
    }
    cout<<list.back()<<endl;
    for (int i = 0; i < size(result); i+=2)
    {
        cout<<result[i]<<" "<<result[i+1]<<endl;
    }    
}

  return 0;
}