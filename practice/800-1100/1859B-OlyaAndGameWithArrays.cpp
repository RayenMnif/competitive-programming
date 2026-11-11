#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while (t--){
        int n; cin >> n;
        int second_min = 0;
        int min_sec_min = INT_MAX;
        int overall_min = INT_MAX;
        long long ans = 0;
        for (int i = 0; i < n; i++){
            int m; cin >> m; 
            vector<int> arr(m);
            for (int j = 0; j < m; j++){
                cin >> arr[j];
            }
            sort(arr.begin(), arr.end());
            second_min = (m > 1) ? arr[1] : arr[0];
            ans += second_min;
            min_sec_min = min(min_sec_min, second_min);
            overall_min = min(overall_min, arr[0]);
        }
        ans = ans - min_sec_min + overall_min;
        cout << ans << '\n';
    }
    return 0;
}
