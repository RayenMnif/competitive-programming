#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    for (int k = 0; k < t; k++){
        int n;
        cin >> n; 
        vector<int> arr(n); 
        for (int i = 0; i < n; i++) cin >> arr[i]; 
        sort(arr.begin(), arr.end());
        int freq = 1; 
        int max_freq = 1; 
        for (int i = 1; i < n; i++){
            if (arr[i] == arr[i-1]){
                freq++;
                max_freq = max(max_freq, freq);
            }
            else
                freq = 1;
        }
        int ops = n - max_freq;
        while (max_freq < n){
            ops++;
            max_freq *= 2; 
        }
        cout << ops << '\n';
    }
}
