#include<bits/stdc++.h>
#define ll long long
#define nl endl
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define minus_one cout << -1 << endl
#define pii pair<ll, ll>
#define fr for (int i = 0; i < n;i++)
using namespace std;

int find_left_index(vector<ll>v, int target){
    int l = 0, r = v.size() - 1;
    int ans;
    while(l<=r){
        int mid = (l + r) / 2;
        if(v[mid]>=target){
            ans= mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--){
        
    // }

    int n;
    cin >> n;
    vector<ll> v(n);
    fr cin >> v[i];

    sort(v.begin(), v.end());

    int q,l,r;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> l >> r;

        int left_ind = find_left_index(v, l);
    }
    return 0;
}