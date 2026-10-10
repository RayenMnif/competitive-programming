#include <bits/stdc++.h>

using namespace std;

#define ll long long 
#define PRIMES_SIZE 15

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<int,int> factor;
    for (auto &x: v){
        cin >> x;
        int ok = 1;
        int count = 0;
        while (x % 2 == 0){
            count++;
            factor[2]++; 
            if (count > 2){
                ok = 0;
                break;
            }
        }
        if (count == 2 && x != 4) ok = 0;
        for (ll d = 3; d*d <= n && ok; d+=2){
            if (x % d == 0){
                count++;
                factor[d]++;
                if (count > 2){
                    ok = 0; 
                    break;
                }
            }
        }
        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
     
    return 0;
}
