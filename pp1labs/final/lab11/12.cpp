#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
string n;
cin >> n;
int cnt =0;
for(size_t i = 0; i < n.size(); i++){
    if((n[i]-'0')%2==0){
        cnt++;
    }
}
cout<<cnt;
  }
