#include<iostream>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    if(n==0) cout<<2*x;
    int vol = max(a[0]-0,2*(x-a[n-1]));
    for(int i =1;i<n;i++){
        vol = max(a[i]-a[i-1],vol);
    }
    cout<<vol<<endl;

    }
}