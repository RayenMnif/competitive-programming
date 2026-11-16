#include <bits/stdc++.h>
#include <vector>

using namespace std;

map<int, int> calcFreq(vector<int> v){
    map<int, int> freqV;
    int n = v.size();
    int i = 0;
    while (i < n){
        int freq = 1;
        while (i + 1 < n && v[i] == v[i+1]){
            freq++; 
            i++;
        }
        if (freq > freqV[v[i]])
            freqV[v[i]] = freq;
        i++;
    }
    return freqV;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t; 
    while (t--){
        int n; cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        int ans = INT_MIN;
        int i = 0;
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; i < n; i++)
            cin >> b[i];
        map<int, int> freqA = calcFreq(a);
        map<int, int> freqB = calcFreq(b);;
        for (const auto& [key, val] : freqA) ans = max(ans, val+freqB[key]);
        for (const auto& [key, val] : freqB) ans = max(ans, val+freqA[key]);
        cout << ans << '\n';
    }
    return 0;
}
