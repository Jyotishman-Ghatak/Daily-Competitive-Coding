#include<iostream>
#include<vector>
using namespace std;

int main(){
	long long i,sum=2,second,first,third=0;
	first=1;
	second=2;
	while(third<4000000){
		third=first+second;
		first=second;
		second=third;
		if(third%2==0){
			sum+=third;
		}
	}
	cout<<sum;	
}
