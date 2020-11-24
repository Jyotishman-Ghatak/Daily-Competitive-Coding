#include<iostream>
#include<vector>
using namespace std;

int main(){
	long long i,j,num,c,maxc=0,maxnum;
	vector <long long> v(1000000);
	v[1]=1;
	for(i=2;i<1000000;i++){
		num=i;
		c=0;
		while(num!=1 && num>=i){
			if(num%2==0){
				num=num/2;
			}
			else{
				num=3*num+1;
			}
			c++;
		}
		v[i]=v[num]+c;
		
		if(maxc<v[i]){
			maxc=v[i];
			maxnum=i;
		}
	}
	cout<<maxnum<<" "<<maxc;
}
