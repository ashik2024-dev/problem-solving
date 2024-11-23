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
        
        // int cnt = 0, lc = 0, rc = 0, l = 0, r = n - 1;
        // while(l<=r){
        //     if(x==k)break;

        //     if(v[l]==1){
        //         cnt++;
        //         l++;
        //         x -= 1;
        //     }
        //     if(x==k)break;

        //     if(v[r]==1){
        //         cnt++;
        //         r--;
        //         x -= 1;
        //     }
        //     if(x==k)break;

        //     if(v[l]==0 && v[r]==0){
        //         while(v[l]==0 && l<r){
        //             lc++;
        //             l++;
        //         }
        //         while(v[r]==0 && r>l){
        //             rc++;
        //             r--;
        //         }
        //         int mn = min(lc, rc);
        //         if(mn==lc){
        //             r += rc;
        //             cnt += lc;
        //         }
        //         if(mn==rc){
        //             l -= lc;
        //             cnt += rc;
        //         }
        //     }
        // }

        int cnt = 0, l = 0, r = 0;

        while(r<n){
            
        }


        cout << cnt << endl;
    }
    return 0;
}