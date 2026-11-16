#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector<pair<int,int>> a(n);
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            a[i] = {-((x - 1) % k + 1), i+1};
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
            cout << a[i].second << (i == n-1 ? '\n' : ' ');
    }
    return 0;
}
