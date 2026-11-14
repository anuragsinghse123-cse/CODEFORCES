#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int b = 0;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            b ^= x;
        }

        if(n % 2 == 0) {
            cout << (b == 0 ? 0 : -1) << endl;
        }
        else {
            cout << b << endl;
        }
    }
}