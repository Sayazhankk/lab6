#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
  string n;
  cin>>n;
  int sum =0;
  for(size_t i = 0; i < n.size();i++){
    
    sum+=(n[i]-'0')/2;
  }
  cout<<sum;
  }
