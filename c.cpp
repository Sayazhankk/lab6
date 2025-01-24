#include <iostream>
using namespace std;
int main () {
 int n;
 int a[n];
 for(int i = 1; i < n; i++ ){
    cin>>a[i];
 }
  int max = a[1];
  int mi = 1;
for(int i = 1; i< n; i++){
    if(a[i]>max){
    
    mi=i;}
    
}
   cout<<mi;
return 0;
}