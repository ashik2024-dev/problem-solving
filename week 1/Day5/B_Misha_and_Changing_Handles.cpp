#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;
    map<string, string> recent, old;
    for (int i = 0; i <n; i++)
    {
        string a,b;
        cin>>a>>b;
        if (old.find(a) != old.end())
        {
            string s = old[a];
            recent[s] = b; 
            old.erase(a);
            old[b] = s;
        }
        else{
            recent[a] = b;
            old[b] = a;
        }
    }
    cout << recent.size() << endl;
    for (auto [x,y] : recent)
    {
        cout<<x<< " "<<y << endl;
    }
  return 0;
}