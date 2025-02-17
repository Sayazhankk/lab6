#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
  string s;
  cin >> s;
  string t = s;
   reverse(t.begin(),t.end());
  if(s==t){
    cout << "Yes";

  }
  else{cout<< "No";}
  }
