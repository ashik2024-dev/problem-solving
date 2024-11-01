#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        map<char,int> uns;
        string r;
        for(char c:s){
            uns[c]++;
            if(uns[c]<=1){
                r += c;
            }
        }
        sort(r.begin(), r.end());
        // cout << r << endl;

        map<char, char> m;
        int left = 0, right = r.size() - 1;
        while(left<=right){
            m[r[left]] = r[right];
            m[r[right]] = r[left];
            left++;
            right--;
        }

        for(char c:s){
            cout << m[c];
        }
        cout << endl;
    }
    return 0;
}