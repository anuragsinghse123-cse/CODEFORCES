#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int count = 0;
    int n, m;
    cin>>n>>m;
    string x;
    string s;
    cin>>x;
    cin>>s;
    bool ok = false;
   
   if(x.find(s)!=string::npos){
       cout<<"0"<<endl;
       continue;
   }
   while(x.size()<s.size()){
       x+=x;
       count++;
       if(x.find(s)!=string::npos){
           cout<<count<<endl;
           ok=true;
           break;
       }
   }
   if(!ok){
       for(int i =0;i<2&& !ok;i++){
           x+=x;
           count++;
           if(x.find(s)!=string::npos){
               cout<<count<<endl;
               ok = true;
               break;
           }
       }
   }
   if(!ok){
       cout<<"-1"<<endl;
   }
}

}
