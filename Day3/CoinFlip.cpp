#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int g;
	    cin>>g;
	    for(int j=0;j<g;j++){
	        int I,N,Q;
	        int num_head,num_tail;
	        cin>>I>>N>>Q;
	        if(I==1){
	            num_head=N/2;
	            num_tail=N-N/2;
	        }
	        else if(I==2){
	            num_tail=N/2;
	            num_head=N-N/2;
	        }
	        if(Q==1){
	            cout<<num_head<<endl;
	        }
	        else if(Q==2){
	            cout<<num_tail<<endl;
	        }
	    }
	    
	}
	return 0;
}

