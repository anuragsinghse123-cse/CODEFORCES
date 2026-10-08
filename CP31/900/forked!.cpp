#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;

        int xk, yk;
        cin >> xk >> yk;

        int xq, yq;
        cin >> xq >> yq;

        set<pair<int,int>> king, queen;

        int dx[] = {a, a, -a, -a, b, b, -b, -b};
        int dy[] = {b, -b, b, -b, a, -a, a, -a};

        for(int i = 0; i < 8; i++) {
            king.insert({xk + dx[i], yk + dy[i]});
            queen.insert({xq + dx[i], yq + dy[i]});
        }

        int ans = 0;

        for(auto p : king) {
            if(queen.find(p) != queen.end()) {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}