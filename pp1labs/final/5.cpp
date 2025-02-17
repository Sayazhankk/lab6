
#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n ;
    vector<int> a (n);
    for(int i = 1 ; i <= n; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    
    rotate(a.begin(),a.begin()+(k-1),a.end()); 

     for(vector<int>::iterator it = a.begin() ; it!=a.end() ; it++){
        cout<<*it<<" ";
      }
    }
