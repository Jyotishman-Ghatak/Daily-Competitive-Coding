#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,p;
    vector <int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p;
        v.push_back(p);
    }
    v.insert(v.end(),v.begin(),v.end());
    int count,maxcount=0;
 
    for(int i=0;i<v.size();i++){
        if(v[i]==1){
            count=0;
            for(int j=i;j<v.size();j++){
                if(v[j]==1){
                    count++;
                    i++;
                }
                else{
                    break;
                }
                
            }
            if(count>maxcount){
                maxcount=count;
            }
        }
    }
    cout<<maxcount;
}
