#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n,k,x;
        cin>>n>>k>>x;
        vector<int>v;
        if(x!=1){
            if(x==k) k = k-1;
            int cnt = n/k;
            int a = n-cnt*k;
            for(int i =0;i<cnt;i++) v.push_back(k);
            for(int i =0;i<a;i++) v.push_back(1);
        }
        else if(x==1){
            if(k==1) {
                cout<<"NO"<<endl;
                continue;
            }
            else if(n==1){ 
                cout<<"NO"<<endl;
                continue;
            }
            else if(k==2){
                if(n%2!=0){
                    cout<<"NO"<<endl;
                    continue;
                }
                else{
                    cout<<"YES"<<endl;
                    cout<<n/2<<endl;
                    for(int i =0;i<n/2;i++) cout<<2<<" ";
                    cout<<endl;
                    continue;
                }
            }
        else if(n%2==0){
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            for(int i =0;i<n/2;i++) cout<<2<<" ";
            cout<<endl;
            continue;
        }
        else {
            v.push_back(3);
            n-=3;
            while(n>0){
                v.push_back(2);
                n-=2;
            }
               
           }
        }
    if(v.size()>0){
        cout<<"YES"<<endl;
        cout<<v.size()<<endl;
        for(int x : v) cout<<x<<" ";
        cout<<endl;
    }
}
}