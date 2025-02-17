#include <iostream>
using namespace std;
void lp(int n , int a[1000000] , int  x  ){
for(int i = 0 ; i < n ; i++){
    if ( x == a[i]){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    cout << endl;
}
}
int main () {
    int n;
    cin >> n;
    int a[1000000];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int x ;
    cin >> x;
    lp(n, a , x);
   

}