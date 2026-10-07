#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve(){
   int n, maxHealth=0;
   cin >> n; 
   vector<int> a(n);
   map<int, int> freq;
   int F = 0;
   int most_freq_elt = 0;
   for (int i = 0; i < n ; i++) {
        cin >> a[i];
        freq[a[i]]++;
        if (freq[a[i]] > F){
            F = freq[a[i]];
            most_freq_elt = a[i];
        }
   }
   int O = n - F;
   for (int i = 0; i < n ; i++){
       if (a[i] != most_freq_elt)
           maxHealth += a[i];
   }
   maxHealth += min(F, O+2)*most_freq_elt;
   cout << maxHealth << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); 

    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
