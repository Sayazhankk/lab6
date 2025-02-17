#include <iostream>
using namespace std;
void l(int n){
    if(n==0){
        cout<<"false";
    }
      else if(n==1){
        cout<<"true";
    }
    else{
        cout<<n;
    }
}
int main(){
    int n;
    cin >> n;
    l(n);
    return 0;

}