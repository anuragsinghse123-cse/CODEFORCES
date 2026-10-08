#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        int count1 =0;
        int count2=0;
        for(int i =0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0) count2++;
            else count1++;
        }
        if(count1%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}