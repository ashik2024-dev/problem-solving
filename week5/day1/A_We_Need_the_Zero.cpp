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
        int n,p=0;
        int x = 0;
        cin >> n;
        vector<int>v(n);
        vector<int>v1(n);
        fr{
            cin >> v[i];
            x = x ^ v[i];
        }

        if(n==1)
            cout << v[0] << nl;
        else {
            fr {
                v1[i] = v[i] ^ x;
            }
            fr{
                p = p ^ v1[i];
            }
            if(p==0)
                cout << x << nl;
            else
                cout << -1 << nl;
        }
    }
    return 0;
}