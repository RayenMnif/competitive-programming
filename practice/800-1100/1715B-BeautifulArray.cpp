#include <bits/stdc++.h>

using namespace std;

#define ll long long 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t; 
    while (t--){
        int n, k, b;
        ll s;
        cin >> n >> k >> b >> s;
        int r = s/k - b;
        if (s < (ll) k*b || s > 1ll*k*b + 1ll*(k-1)*n){
            cout << "-1\n";
            continue;
        }
        ll max = s;
        while (max/k != b && k != 1){
            max -= k-1;
            cout << k-1 << ' ';
            n--;
        }
        cout << max << ((n--==1) ? '\n' : ' ');
        while (n--){
            cout << '0' << ((n==0) ? '\n' : ' ');
        }
    }
}
