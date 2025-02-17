#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i = 0 ; i < n; i++){
    cin >> a[i];
  }
  int x;
  cin >> x;
  bool iseq = false;
   for(int i = 0 ; i < n; i++){
    if(x==a[i]){
   iseq=true;
  }
  }
  if(iseq)    { cout << "Yes";
    }
    else{
        cout << "No";
    }
}
