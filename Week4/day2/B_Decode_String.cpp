#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ios::sync_with_stdio(0);
cin.tie(NULL);
int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        string t;
        cin >> t;

        string result;
        int i = n - 1;

        while (i >= 0) {
            if (t[i] == '0') {
                int num = (t[i - 2] - '0') * 10 + (t[i - 1] - '0');
                result += char('a' + num - 1);
                i -= 3;
            } else {
                int num = t[i] - '0';
                result += char('a' + num - 1); 
                i -= 1;
            }
        }
        reverse(result.begin(), result.end());
        cout << result << endl;
    }

    return 0;


  return 0;
}
