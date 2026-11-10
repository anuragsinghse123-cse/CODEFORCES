#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        int ans = 0;
        for(int i = 0; i < n; i++){
            int count = 0;

            while(i < n && a[i] % 2 == 0){
                count++;
                i++;
            }

            if(count >= 1){
                ans += (count - 1);
                i--;
                continue;
            }

            while(i < n && a[i] % 2 != 0){
                count++;
                i++;
            }

            if(count >= 1){
                i--;
                ans += (count - 1);
            }
        }
        cout << ans << endl;
    }
}