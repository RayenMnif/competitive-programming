#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t; cin >> t; 
    while (t--){
        int n; cin >> n;
        int k; cin >> k;
        vector<int> a(n);
        int ans = 1e9; 
        int even = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] % 2 == 0) even++;
            if (a[i] % k == 0) ans = 0;
            ans = min(ans, k - a[i] % k); 
        }
        if (k == 4){
            if (even >= 2) ans = 0;
            else if (even == 1) ans = min(ans, 1);
            else ans = min(ans, 2);
        }
        cout << ans << '\n';
    }
}
