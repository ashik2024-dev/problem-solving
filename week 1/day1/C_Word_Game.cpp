#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n;
        map<string,int> mp;
        vector<string> v;

        for (int i = 0; i < 3;i++){
            for (int j = 0; j < n;j++){
                cin >> s;
                v.push_back(s);
                mp[s]++;
            }
        }

        int s1=0;
        for (int i = 0,j=1; i < v.size();i++,j++){
            int x = mp[v[i]];
            if(x==1)
                s1 += 3;
            else if(x==2)
                s1 += 1;
            if(j%n==0){
                cout << s1 << " ";
                s1 = 0;
            }
        }
        cout << endl;
    }
    return 0;
}