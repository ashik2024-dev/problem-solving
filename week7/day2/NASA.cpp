#include<bits/stdc++.h>
#define ll long long
#define nl endl
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
#define minus_one cout << -1 << endl
#define pii pair<ll, ll>
#define fr for (int i = 0; i < n;i++)
#define vc vector<ll> v(n);
using namespace std;

const int x = (1LL << 15);
vector<ll> isPresent(x);
vector<ll> allPalindrome;

bool isPalindrome(int s){
    string s1 = to_string(s);
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    if(s1==s2){
        return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    for (int i = 0; i < x;i++){
        if(isPalindrome(i)){
            allPalindrome.push_back(i);
        }
    }

    // cout << allPalindrome.size() << nl;

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vc;
        fr {
            cin >> v[i];
            isPresent[v[i]]++;
        }
        ll ans = n;

        for (int i = 0; i < n;i++){
            for (int j = 0; j < allPalindrome.size();j++){
                ll x = v[i] ^ allPalindrome[j];
                ans += isPresent[x];
            }
        }
        cout << (ans/2) << nl;
    }
    return 0;
}