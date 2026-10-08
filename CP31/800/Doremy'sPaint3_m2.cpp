#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    map<int,int>mpp;
    for(int i =0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    if(mpp.size()>2) cout<<"No"<<endl;
    else if(mpp.size()==1) cout<<"YES"<<endl;
    else if(mpp.size()==2){
        auto it = mpp.begin();
        int a = it->second;
        it++;
        int b = it->second;
        if(abs(a-b)<=1) cout<<"YES"<<endl;
        else cout<<"No"<<endl;
    }
}

}
