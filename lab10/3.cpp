#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    a.erase(unique(a.begin(),a.end()),a.end());

     for(int i = 0 ; i < a.size(); i++){
       cout << a[i]<<endl;
       
    }
}