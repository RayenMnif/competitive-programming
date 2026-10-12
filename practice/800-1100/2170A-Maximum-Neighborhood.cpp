#include <iostream>

using namespace std; 

#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        ll m;
        if (n == 1) m = 1;
        else if (n == 2) m = 9;
        else if (n > 4)
            m = (n*n - 1) + (n*n - n) + (n*n - n - 1) + (n*n - n - 2) + (n*n - 2*n - 1);
        else if (n > 2)
          m = (n*n) + (n*n - 1) + (n*n - 2) + (n*n - n - 1);
        cout << m << '\n';
    }
    return 0;
}
