#include<iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i = 0; i<n; ++i){
        cin>>v[i];
    }
    int sum=0;
    
    for(int i = 0; i<n; ++i){
       sum+=v[i];}
       int av=sum/n; 
       int noc=abs(av-m);
       cout<<noc<<endl;
       return 0;

    }


