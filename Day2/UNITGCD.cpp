#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    if(n>=3){
	    	if(n%2==0){
	        	cout<<n/2<<"\n";
	        	for(int j=1;j<n;j+=2){
	            	cout<<2<<" "<<j<<" "<<j+1<<"\n";
	        	}	
	    	}
	    	else{
	        	cout<<n/2<<"\n";
		        cout<<3<<" "<<1<<" "<<2<<" "<<n<<"\n";
		        for(int j=3;j<n-1;j+=2){
		            cout<<2<<" "<<j<<" "<<j+1<<"\n";
		        }
	    	}
		}
		else{
				cout<<1<<"\n";
				if(n==2){
					cout<<1<<" "<<1<<" "<<2<<"\n";
				}
				else if(n==1){
					cout<<1<<" "<<1<<"\n";
				}
			}
	}
	return 0;
}

