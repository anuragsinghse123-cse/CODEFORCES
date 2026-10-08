#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        vector<int> b, c;

        int i;
        for (i = n - 1; i >= 1; i--) {
            c.push_back(a[i]);
            if (a[i] != a[i - 1])
                break;
        }

        for (int j = i - 1; j >= 0; j--)
            b.push_back(a[j]);

        if (b.empty() || c.empty()) {
            cout << -1 << "\n";
        } else {
            cout << b.size() << " " << c.size() << "\n";

            for (int x : b)
                cout << x << " ";
            cout << "\n";

            for (int x : c)
                cout << x << " ";
            cout << "\n";
        }
    }
}