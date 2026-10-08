#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
        int sum = 0;
    vector<vector<char>>a(10,vector<char>(10));
for(int i =0;i<10;i++){
    for(int j =0;j<10;j++){
        cin>>a[i][j];
    }
}
for(int i =0;i<10;i++){
    for(int j =0;j<10;j++){
        if(a[i][j]=='X'){
            if(i<5 && j<5) sum+= min(i,j)+1;
            else if(j<5 && i>4){
                sum+= (min(9-i,j)+1);   
            }
            else if(i<5 &&j >4) sum+=(min(9-j,i)+1);
            else sum+= min(9-j,9-i)+1;
        }
    }
}
cout<<sum<<endl;
   }
}
