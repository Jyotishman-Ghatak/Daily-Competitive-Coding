#include<iostream>
using namespace std;

int main(){
	long long n=600851475143,i,factor;
	for(i=2;i*i<n;i++){
		while(n%i==0){
			factor=i;
			n=n/i;
		}
	}
	if(n>1){
		factor=n;
	}
	cout<<factor;
}
