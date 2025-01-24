#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
 long long sum =0;
 long long n;
 while(cin >> n){
    if(n==0){
        break;
    }
    sum+=n;
 }
 cout << sum;
  }
