#include <bits/stdc++.h>

using namespace std;

#define ll long long 
#define PRIMES_SIZE 15
int PRIMES[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<int,int> m;
    for (auto &x: v){
        cin >> x;
        int ok = x != 1;
        int count = 0;
        for (int key: PRIMES){
            m[key] = 0;
        }
        if (ok){
            for (int i = 0; i < PRIMES_SIZE; i++){
                if (x == PRIMES[i]){ok=0; break;}
                while (x % PRIMES[i] == 0){
                    count++;
                    m[PRIMES[i]]++;
                    if (m[PRIMES[i]] > 2){
                        ok=0; break;
                    }
                    else if (count != m[PRIMES[i]]){ok=0; break;}
                    else if (m[PRIMES[i]] == 2 && PRIMES[i]*PRIMES[i] == x) break;
                }
                if (!ok) break;
            }
        }
        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
     
    return 0;
}
