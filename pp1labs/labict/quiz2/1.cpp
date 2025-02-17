#include <iostream>
using namespace std;
int main ( ){
    int n;
    cin >> n;
    int a[n];
    for( int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int s = 0;
    int c = 0;
    int t;
    
    for( int i = 0 ; i < n ; i++){
        if(a[i] % 2 == 0){
            s+=a[i];
            c++;
            t = s * c;
        }
    }
    cout <<"Left hand magic power" << t <<endl;
      
      int d = 0 ;
      int l =0 ;
    
    for( int i = 0 ; i < n ; i++){
        if(a[i] % 2 == 1){
            d+=a[i];
            l++;
            t = d * l;
        }
    }
    cout <<"Right hand magic power" << t ; 
    
}