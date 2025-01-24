#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main (){
    int n,m ;
    cin >> n >> m;
    int mx = 0;
    for(int i = 1 ; i <= n; i++){
        if(n%i==0 && m%i==0){
            mx=i;
  
                }
    }
    cout << mx;
        }
    