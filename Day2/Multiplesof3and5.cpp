#include<iostream>
using namespace std;

int main(){
	int i,sum3,sum5,sum15;
	sum3=sum5=sum15=0;
	for(i=3;i<1000;i+=3){
		sum3+=i;
	}
	for(i=5;i<1000;i+=5){
		sum5+=i;
	}
	for(i=15;i<1000;i+=15){
		sum15+=i;
	}
	//cout<<sum3<<endl<<sum5<<endl<<sum15;
	cout<<sum3+sum5-sum15;
	
}
