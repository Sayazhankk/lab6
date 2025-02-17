#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <stdio.h>
using namespace std;
int main(){
  long long n;
  cin >> n;
  for(long long i = 0 ; i <= n ;i++){
    long long a = powl(i,i);
    cout << a <<" ";
  }
}