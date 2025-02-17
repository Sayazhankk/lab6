#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main(){
  string n;
  cin >> n;
  int sum = 0;
  for(size_t i = 0; i < n.size(); i++){
    int t = (n[i]-'0');
    sum+=t;  }
    cout << sum;
  }
