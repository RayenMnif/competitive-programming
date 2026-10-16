#include <bits/stdc++.h>

using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t; 
    while (t--){
        string s; cin >> s;
        int nb0 = 0, nb1 = 0;
        for (const char &c : s){
            if (c == '0') nb0++;
            else nb1++;
        }
        int t = 0;
        for (const char &c : s){
           if (c == '0'){
               if (nb1 == 0) break;
               nb1--;
           }
           else{
               if (nb0 == 0) break;
               nb0--;
           }
           t++;
        }
        cout << s.length() - t << '\n';
    }
    return 0;
}
