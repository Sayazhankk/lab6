#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main (){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
     a.erase(unique(a.begin(), a.end()), a.end());
    do{ for(int i = 0 ; i < a.size() ; i++){
        cout<<a[i]<<" ";
        }
         cout<<endl;
         }
      while(next_permutation(a.begin(),a.end()));
    }
