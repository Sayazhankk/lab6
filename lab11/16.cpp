#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main(){
 string n;
 cin >> n;
 int sum = 0;
 for(size_t i = (n.size()-1); 0 <= i ; i--){
    int t = ((n[i]-'0')*pow(2,i));
    sum+=t;
 }
 cout << sum;
 
}
