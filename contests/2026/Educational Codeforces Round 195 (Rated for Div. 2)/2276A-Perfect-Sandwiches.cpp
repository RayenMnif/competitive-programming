#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t; 
    while (t--){
        int a, b;
        cin >> a >> b;
        if (b >= a) cout << -1 << '\n';
        else{
            int n = 0;
            do{
                b--; 
                a -= 2;
                n++; 
            }while (a != b && b != 0);
            cout << n << '\n';
        }
    }
    return 0;
}
