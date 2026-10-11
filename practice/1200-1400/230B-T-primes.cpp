#include <bits/stdc++.h>

using namespace std;

#define ll long long 

bool isPrime(ll i){
    for (int d = 2; (ll) d*d <= i; d++){
        if (i % d == 0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> v(n);
    set<ll> primes;
    for (int i = 2; i < 1e6; i++){
        if (isPrime(i)) primes.insert((ll) i*i);
    }
    for (auto &x: v){
        cin >> x;
        if (primes.find(x) == primes.end()){
            cout << "NO\n";
        }
        else cout << "YES\n";
    }
     
    return 0;
}
