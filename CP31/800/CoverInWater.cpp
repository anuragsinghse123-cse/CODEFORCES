#include<iostream>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ans =0;
        int n;
        cin>>n;
        char a[n];
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
       
       for(int i =0;i<n;i++){
        while(i<n && a[i]=='#') i++;
       int count =0;
       while(i<n && a[i]=='.'){
        count++;
        i++;
       }
       if(count==1) ans++;
       else if(count>1)ans+=2;
       }
       cout<<ans<<endl;

    }

}