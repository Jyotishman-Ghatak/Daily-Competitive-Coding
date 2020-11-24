#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int i,p;
	int t;
	cin>>t;
	
	for(i=0;i<t;i++){
	    vector<int> v ;
	    int c=0,n,maxspeed;
	    cin>>n;
	    for(int j=0;j<n;j++){
	        cin>>p;
	        v.push_back(p);
	    }
	    maxspeed=v[0];
	    for(int j=0;j<n;j++){
	        if(v[j]<=maxspeed){
	            maxspeed=v[j];
	            c++;
	        }
	    }
	    cout<<c<<"\n";
	}
	return 0;
}

