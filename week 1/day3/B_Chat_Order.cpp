#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> v;
    map<string,int> m;

    for (int i = 0; i < n;i++){
        string s;
        cin >> s;
        v.push_back(s);
    }

    for (int i = n - 1; i >= 0;i--){
        m[v[i]]++;
        if(m[v[i]]<=1){
            cout << v[i] << endl;
        }
    }

        return 0;
}