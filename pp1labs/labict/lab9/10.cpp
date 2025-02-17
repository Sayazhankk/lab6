#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main (){
    int n;
    cin >> n;
    vector<int> a(n);
    for( int i = 0 ; i < n; i++){
    
        cin >> a[i];
    }
    int cnt = 0 ;
    for( int i = 0 ; i < n; i++){
        int v = abs(a[i]);
        if(a[i]==v){
            a.erase(v);
        }
        if(v==2 ){
            cnt++;
        }
        else if(v%2 == 1){
            cnt++;
        
        }
    }
     cout << cnt;
}