#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie();
    int t; cin >> t;
    while(t--){
        int a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq; 

        set<pair<int, int>> king;
        set<pair<int, int>> queen;

        king.insert({xk - a, yk - b});
        king.insert({xk - a, yk + b});
        king.insert({xk + a, yk - b});
        king.insert({xk + a, yk + b});

        king.insert({xk - b, yk - a});
        king.insert({xk - b, yk + a});
        king.insert({xk + b, yk - a});
        king.insert({xk + b, yk + a});

        queen.insert({xq - a, yq - b});
        queen.insert({xq - a, yq + b});
        queen.insert({xq + a, yq - b});
        queen.insert({xq + a, yq + b});

        queen.insert({xq - b, yq - a});
        queen.insert({xq - b, yq + a});
        queen.insert({xq + b, yq - a});
        queen.insert({xq + b, yq + a});

        int nb = 0;
        for (const auto &p : king){
            if (queen.count(p)) nb++;
        }

        cout << nb << '\n';
    }
    return 0;
}
