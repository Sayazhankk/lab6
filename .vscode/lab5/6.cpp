#include <bits/stdc++.h>
using namespace std;
int main () {
 int n , m ;
 cin >> n >> m;
 int a[n][m];
 int k ;
 cin >> k;
 for ( int i = 0 ; i <= n ; i++){
    for ( int j = 0; j <= m ; j++){
        cin >> a[i][j];
    }
 }
 int s = 0;
 for ( int i = k ; i < k+1; i++){
    for ( int j = 0; j <= m ; j++){
        
        s+=a[i][j]; 
    
    
    cout << s;
    }
 }
}