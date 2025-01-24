#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main(){
  long long n;
  cin >> n;
  bool isdeg = false;
 for(int i = 0; i <=63 ; i++){
    if(n==pow(2,i)){
        isdeg=true;
 }
  }
  if(isdeg){
    cout << "Yes";
  }
  else{
    cout << "No";
  }}
