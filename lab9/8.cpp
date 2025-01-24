#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    int n ;
    cin >> n;
    int a[n];
    for ( int i = 0 ; i < n; i++){
        cin >> a[i];
    }
      for ( int i = 0 ; i < n; i++){
          int j = n-i-1;
            if ( a[i]==a[j]){
                cout << "OK";
        
            }
            else{
                cout <<"Instead of "<<a[i]<<" here was "<< a[j];
            }
        
    
    cout << endl;
          }
    }

