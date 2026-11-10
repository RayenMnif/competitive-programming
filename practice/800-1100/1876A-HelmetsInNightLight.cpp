#include <bits/stdc++.h>

using namespace std;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; 
   cin >> t;
   while (t--){
        int n, p;
        cin >> n >> p; 
        vector<int> a(n); 
        vector<int> b(n); 
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<pair<int, int>> combined(n);        
        for (int i = 0; i < n; i++){
            cin >> b[i];
            combined[i] = {b[i], a[i]};
        }
        sort(combined.begin(), combined.end());
        for (int i = 0; i < n; i++){
           a[i] = combined[i].second;
           b[i] = combined[i].first;
        }
        long long totalCost = p;
        n--;
        int curr = 0;
        while (n){
            if (a[curr] == 0){
                curr++;
                continue;
            }
            if (b[curr] < p){
                a[curr]--;
                totalCost += b[curr];
            }
            else{
                totalCost += (long long) p * n;
                break;
            }
            n--;
        }
        cout << totalCost << '\n';
   }
}
