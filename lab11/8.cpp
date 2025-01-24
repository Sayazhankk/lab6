#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
  string n;
  cin>>n;
 char mx=n[0];
  for(size_t i = 0 ; i < n.size(); i++){
    if(n[i]>mx){
        mx=n[i];
    }
  }
  cout << mx;
  }
