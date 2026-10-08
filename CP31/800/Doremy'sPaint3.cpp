#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    
    int val1=-1, val2 = -1;
    int count1=0, count2=0;
     bool flag = true;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        if(count1 && val1==x) count1++;
        else if(count2 && val2==x) count2++;
        else if(count1==0) {
            val1= x;
            count1=1;
        }
        else if(count2==0){
            val2=x;
            count2=1;
        }
        else{
            flag = false;
        }
    }
    if(count1 && count2==0 || count2 && count1==0) cout<<"YES"<<endl;
    else if(flag && abs(count1-count2)<=1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

}
