#include <iostream>
#include <cstdlib>
using namespace std;
void dif( int n , int a[10000] ,  int b[10000] )
{
    for( int i = 0 ; i < n ; i++){
        int t = b[i] - a[i];
        cout << abs(t) << " ";
    }
    cout << endl;
}
int main () {
    int n ;
    cin >> n;
    
    int a[10000];
    int b[10000];
    for ( int i = 0; i < n ; i++){
        cin >> a[i];
    }
    for ( int i = 0; i < n ; i++){
        cin >> b[i];
    }
    dif(n , a , b);
    
    return 0;
    
}
