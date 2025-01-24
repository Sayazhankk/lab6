#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n;
cin >> n;
for( int i = 4 ; i >0; i--){
    cout << ((n >> i)&1);
}}