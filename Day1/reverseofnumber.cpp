#include <iostream>
using namespace std;
void reverse(int n){
    int s=0,r;
    while(n>0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    cout<<s<<endl;
}
int main() {
	// your code goes here
	int t,n,a[1000];
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>a[i];
	}
	for(int i=0;i<t;i++){
	    reverse(a[i]);
	}
	return 0;
}
