#include<iostream>
#include<string>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	string s;
	for(int i=0;i<t;i++){
		long long int laddus=0;
		cin>>n>>s;
		for(int j=0;j<n;j++){
			string a;
			cin>>a;	
			if(a=="CONTEST_WON"){
				int r;
				cin>>r;
				if(r<20){
					laddus+=300+(20-r);
				}
			}
			if(a=="TOP_CONTRIBUTOR"){
				laddus+=300;
			}
			if(a=="BUG_FOUND"){
				int severity;
				cin>>severity;
				if(severity>=50 && severity<=1000){
				laddus+=severity;
				}
			}
			if(a=="CONTEST_HOSTED"){
				laddus+=50;
			}
			
		}
		if(s=="INDIAN"){
			cout<<laddus/200;
		}
		else{
			cout<<laddus/400;
		}
	}
}
