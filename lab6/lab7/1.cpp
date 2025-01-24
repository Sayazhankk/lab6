#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main () {
    int n;
    cin>>n;
    vector<int> v(n);
   for(int i = 0 ; i <n; i++ ){
        cin>>v[i];


    }
 vector<bool>found(n+1,false);
 for (int i = 0; i < n; i++) {
        if (v[i]<=n) {
            found[v[i]]=true;
        }
    }

 for (int i = 0; i <= n; i++) {
        if (!found[i]) {
            cout << i << endl; 
            break; 
        }
    }
}