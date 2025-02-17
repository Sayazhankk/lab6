#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < a.size(); i++){
        cin>>a[i];
    }
int cnt = 0;
    for(int i = 0 ; i < a.size()-1; i++){
      if(a[i]==a[i+1]){
     cnt++;
      }}
      cout<<cnt+1;
    
}
