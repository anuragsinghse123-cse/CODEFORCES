#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   bool ok = false;
   int minpos =INT_MAX;
   int minneg = INT_MIN;
   vector<int>a(n);
   for(int i =0;i<n;i++){
       cin>>a[i];
       if(a[i]==0)  ok = true;
      else if(a[i]>=0  ){
           minpos = min(minpos,a[i]);
       }
       else minneg = max(minneg,a[i]);
   }
   
   if(ok==true) cout<<"0";
   else if(minpos<INT_MAX && minneg >INT_MIN){
       int a = -1*minneg;
       cout<<min(a,minpos);
   }
   
   else if(minneg>INT_MIN) cout<<(-1*minneg);
   else cout<<minpos;
}
