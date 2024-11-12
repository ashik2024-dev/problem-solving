#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int n;
cin>>n;

stack<string> tab;
for (int i = 0; i < n; i++)
{
    string program;
    cin>>program;
    tab.push(program);
}

set<string> ans;
while (!tab.empty())
{
    if (ans.find(tab.top()) == ans.end())
    {
        ans.insert(tab.top());
        string finalProgram = tab.top();
        if (finalProgram.size()>2)
        {
            cout<<finalProgram.substr(finalProgram.size()-2);
        }
        
    }
    tab.pop();
}
  return 0;
}