#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main (){
    int n, m ;
    cin >> n >> m;
    vector<int> a(n);
    for( int i = 0; i < n ; i++){
        cin >>a[i];
    }
    rotate(a.begin(),a.begin()+m,a.end());
    reverse(a.begin(),a.end());
    for( int i = 0; i < n ; i++){
    cout << a[i]<<" ";
    }

}