#include <bits/stdc++.h>

using namespace std;

#define ll long long 

void solve(){
   int PRIMES[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
   ll n; 
   cin >> n;
   vector<ll> a(n);
   for (auto &i: a) cin >> i;
   for (int p : PRIMES){
       for (ll x : a){
           if (x % p != 0){
               cout << p << '\n';
               return;
           }
       }
   }
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
