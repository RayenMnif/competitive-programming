#include <bits/stdc++.h>
#include <utility>
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) static_cast<int>((x).size())
#define pb push_back
#define eb emplace_back

constexpr int INF = 1e9 + 7;
constexpr ll INFLL = 1e18 + 7;
constexpr int MOD = 1e9 + 7; // Swap to 998244353 if needed

void solve() {
    int n; cin >> n;
    vi a(n), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    int c = a[0] - b[0];
    for (int i = 1; i < n; i++){
        c = max(c, a[i] - b[i]);
    }
    vi ans;
    for (int i = 0; i < n; i++){
        if (a[i] - b[i] == c)
            ans.pb(i+1);
    }
    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << ((i == ans.size() -1) ? '\n' : ' ');
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
