#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
    vector <int> a;
    long long n,k,p;
    cin>>n>>k;
    
    for(long long i=0;i<n;i++){
        cin>>p;    	
        if(find(a.begin(),a.end(),p)==a.end()){
        		if(int(a.size())>=k){
        			a.pop_back();
				}
            	a.insert(a.begin(),p);
           }
	}
    cout<<a.size()<<endl;
    for(long long i=0;i<a.size();i++){
    	cout<<a[i]<<" ";
	}
}
