#include<bits/stdc++.h>
#define ll long long
#define nl endl
#define fr for (int i = 0; i < n;i++)
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--){
        
    // }

    int n;
    cin >> n;
    vector<int> v(n);
    fr cin >> v[i];
    int p = 0;

    for (int i = 0; i < (1 << n);i++){
        int s = 0;
        for (int j = 0; j < n; j++)
        {
            if((i>>j)&1){
                s += v[j];
            }else
                s -= v[j];
        }
        if(s%360==0){
            p = 1;
            break;
        }
    }
    if(p)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
    return 0;
}