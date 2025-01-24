#include <iostream>
#include <algorithm>
using namespace std;
int main () {
   int n,z;
   cin>>n>>z;
   int a[n],b[z];
   for(int i = 0 ; i < n ; i++){
    cin>>a[i];}
   
   for( int i = 0 ; i < z ; i++){
    cin>>b[i];}
    int m[n+z];
    for(int i = 0 ; i < n ; i++){
    m[i]=a[i];}
     for( int i = 0 ; i < z ; i++){
    m[i+n]=b[i];}
    copy(a,a+n,m);
    copy(b,b+z,m+n+z);
    sort(m,m+n+z);
  


    
    int i;
    while(i<n+z){

    sort(m,m+n+z);
    cout<<m[i]<<" ";
   }
   
return 0;
  

}
    