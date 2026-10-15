#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int k; cin >> k;
        string s; cin >> s;
        int freq[26]  = {0}; 
        for (const char &c : s){
            freq[(c - 'a')]++;
        }
        int i = 0;
        while (k != 0 && i < 26){ 
           if (freq[i] % 2 != 0){
               freq[i]--;
               k--;
           }
           i++;
        }
        int nb = 0;
        for (i = 0; i < 26; i++){
            if (freq[i] % 2 != 0){
                nb++;
                if (nb == 2) break;
            }
        }
        if (nb == 2) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
