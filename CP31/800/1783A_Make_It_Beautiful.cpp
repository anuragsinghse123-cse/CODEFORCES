#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    bool flag = true;
    cin>>a[0];
    for(int i = 1;i<n;i++){
    cin>>a[i];
    if(a[i]!=a[i-1]) flag = false;
    }
    if(flag){
    cout<<"NO"<<endl;
    continue;
    }
    cout<<"YES"<<endl;
    cout<<a[n-1]<<" "<<a[0]<<" ";
    for(int i = n-3;i>0;i--){
        cout<<a[i]<<" ";
    }
    if(n>2) cout<<a[n-2];
    cout<<endl;
  
}
}
