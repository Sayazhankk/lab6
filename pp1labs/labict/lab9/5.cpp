#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for ( int i = 1 ; i <= n ;i++){
        fill(v.begin(),v.end()+i,v[i]);
        

    }
   for ( int i = 1 ; i <= n ;i++){
cout<<v[i];
        

   }
    }