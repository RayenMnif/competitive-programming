#include <bits/stdc++.h>
 
using namespace std;
 
int solve(){
    int a, b, x;
    cin >> a >> b >> x;
    int ans = INT_MAX; 
    int cnt= 0;
    while (a != b){
        if (b > a) swap(a, b);
        ans = min(ans, a - b + cnt);
        cnt++;
        a /= x;
    }
    ans = min(ans, cnt);
    return ans;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t; 
    while (t--){
        cout << solve() << '\n';
    }
    return 0;
}
