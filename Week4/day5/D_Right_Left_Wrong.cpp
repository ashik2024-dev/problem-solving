#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        ll n, s = 0, x = 0;
        cin >> n;
        vector<ll> v(n);
        vector<ll> p(n+1);
        p[0] = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            x += v[i];
            p[i+1] = x;
        }
        // for(int i:p){
        //     cout << i << " ";
        // }
        // cout << endl;
        string s1;
        cin >> s1;
        ll l = 0, r = n - 1;
        int f1 = 0, f2 = 0;
        while (l <= r)
        {
            if(s1[l] == 'L' && s1[r] == 'R'){
                s += abs(p[r+1] - p[(l+1) - 1]);
                l++;
                r--;
                f1 = 0, f2 = 0;
            }
            else{
                if(s1[l] == 'L' && f1==0){
                    f1 = 1;
                }else if(s1[l] == 'R' && f1==0){
                    l++;
                }

                if(s1[r] == 'R' && f2==0){
                    f2 = 1;
                }else if(s1[r] == 'L' && f2==0){
                    r--;
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}