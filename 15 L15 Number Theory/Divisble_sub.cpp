#include<iostream>
#define ll unsigned long long
using namespace std;


int main() {
	ll int n;
	
	int t;
	cin>>t;
	while(t>0){
	cin>>n;
	
	ll int a[n];
    ll int b[n]={0};
    
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    
	    if(i!=0){
	    b[i]=b[i-1]+a[i];   // cumulative sum generate 
	    }
	    
	    else{
	        b[i]=a[i];
	    }
	    
	}
	
    ll int c[n]={0}; // set all value to zero
    ll int d=0;
    for(int i=0;i<n;i++){
       
       d=b[i]=b[i] % n; 
        c[d]+=1;

    }
    
    ll int  val=0;
    
    for(int i=0;i<n-1;i++){
        
        for(int j=i+1;j<n;j++){

            if(b[i]==b[j]){
               // cout<<i<<" "<<j<<endl;
                val++;
                //cout<<val<<endl;
            }
        }
        
    }
    
    cout<<val+c[0]<<endl;
    
   t--;
   
	}

	
}