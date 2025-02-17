#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<int> v;
    int n;
  while(cin>>n){
    if(n==0){
      break;
    }
  v.push_back(n);
   }
  
  int sum=0;
 while(v.size()>1){
    sum=v.front()+v.back();
    cout<<sum<<" ";
    v.erase(v.begin());
    v.pop_back();
    
  

  }
  if(v.size()==1){
    cout<<v.front();
    
}
}
