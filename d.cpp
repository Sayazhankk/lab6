#include <iostream>

using namespace std;

int main () {
    int a[10001];
    for(int i = 0 ; i < 10001 ; i++){
      cin>>a[i];
    }
    int s = 0;
    for(int i = 0 ; i < 10001; i++){
     s+=a[i];
     
    }cout<<s;
return 0;
}
    

    
    
