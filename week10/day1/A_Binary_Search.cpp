#include<bits/stdc++.h>
#define ll long long
#define nl endl
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define minus_one cout << -1 << endl
#define pii pair<ll, ll>
#define fr for (int i = 0; i < n;i++)
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--){
        
    // }
    int n, q;
    cin >> n >> q;
    vector<ll> v(n);

    fr cin >> v[i];

    for (int i = 0; i < q;i++){
        int key, mid, l = 0, r = n - 1;
        cin >> key;
        bool found = false;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if(v[mid]==key){
                found = true;
                break;
            }else if(v[mid]<key){
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        if(found)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    return 0;
}