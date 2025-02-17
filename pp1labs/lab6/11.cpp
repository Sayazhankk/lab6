#include <iostream>
using namespace std;
void valid(int n){
    while(n>0){
        int dig = n%10;
    
        if(dig%2==0){
            cout<<"Valid";
            
        }
        else if (dig%2 == 1) {
            cout<<"Not valid";
            
        }
        
        n/=10;

    }
    cout<< endl;
}
int main(){
    int n;
    cin >> n;
    valid(n);
}