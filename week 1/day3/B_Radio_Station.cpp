#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<pair<string, string>> v;
    vector<pair<string, string>> v1;

    for (int i = 0; i < n;i++){
        string name, server;
        cin >> name >> server;
        v.push_back({name, server});
    }

    for (int i = 0; i < m;i++){
        string command, ip;
        cin >> command >> ip;
        ip.pop_back();
        v1.push_back({command, ip});
    }

    for (auto j:v1){
        for (auto i:v){
            if (i.second == j.second)
            {
                cout << j.first << " " << j.second << "; #" << i.first << endl;
            }
        }
    }
    return 0;
}