#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int x = 0;
        for (int i = 0; i < n;i++){
            cin >> v[i];
            x += v[i];
        }

        if(x<k){
            cout << -1 << endl;
            continue;
        }

        int l = 0, r = 0, cs = 0, mx = 0;

        while(r<n){
            cs += v[r];

            while(cs>k){
                cs -= v[l];
                l++;
            }

            if(cs==k){
                mx = max(mx, r - l + 1);
            }
            r++;
        }
        cout << n-mx << endl;
    }
    return 0;
}