#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main (){
    int n;
    cin >> n ;
     int a[n];
     int b;
     int m;
     cin >> m;
     vector<int> b(m);
     for(int i = 0 ; i < n ; i++){
        cin >> a[i];
     }
       for(int j = 0 ; j < m ; j++){
        cin >> b[j];
     }
      for(int i = 0 ; i < n ; i++){
        copy(a[i],a[i]+n,b.begin())
     }
   for (vector<int>::iterator it = myvector.begin(); it!=myvector.end(); ++it)
   cout << ' ' << *it;

  cout << '\n';
}