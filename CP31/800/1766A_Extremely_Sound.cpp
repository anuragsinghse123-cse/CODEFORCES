
#include <iostream>
using namespace std;
// counting approach 
void CountingApproach(){
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int ans = 0;
	    if(n<10){
	        cout<<n<<endl;
	        continue;
	    }
	    ans+=9;
	    for(int i = 10;i<=n;i*=10){
	        int a= i;
	        while(a<i*10 && a<=n){
	            a+=i;
	            ans++;
	        }
	        
	    }
	    cout<<ans<<endl;
	}

}
int main() {
    //Mathematical Approach
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int ans = 0;
	    if(n<10){
	        cout<<n<<endl;
	        continue;
	    }
	    ans+=9;
	    for(int i = 10;i<=n;i*=10){
	        int a= i;
	        while(a<i*10 && a<=n){
	            a+=i;
	            ans++;
	        }
	        
	    }
	    cout<<ans<<endl;
	}

}
