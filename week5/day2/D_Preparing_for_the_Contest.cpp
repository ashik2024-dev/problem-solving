#include<bits/stdc++.h>
#define ll long long
#define nl endl
#define fr for (int i = 0; i < n;i++)
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v;
        if(k>0){
            v.push_back(1);
            int x = n - k + 1;
            for (int i = x; i <= n;i++){
                v.push_back(i);
            }
            int p = n - k;
            for (int i = p; i >= 2;i--){
                v.push_back(i);
            }
        }else {
            for (int i = n; i >= 1;i--)
            {
                v.push_back(i);
            }
        }
        fr {
            cout << v[i] << " ";
        }
        cout << nl;
    }
    return 0;
}