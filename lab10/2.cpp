#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    int n , m ;
    cin >> n >> m;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
      for(int i = 0 ; i < m ; i++){
        cin >> v[i];
    }
    int b[n+m];
      for(int i = 0 ; i < n+m ; i++){
      b[i]=v[i];
 
    }
    v.erase(unique(v.begin(),v.end(),v.end()));
       for(int i = 0 ; i < n+m ; i++){
      cout <<b[i];
 
    }

}