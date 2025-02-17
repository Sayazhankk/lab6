#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
     
   for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < n; j++){
            cin >> a[i][j];

        }}
        
        
        for(int i = 0 ; i < n; i++){
            int cnt = 0;
        for(int j = 0 ; j < n; j++){
            if(a[i][j]>a[i][0]){
                cnt ++;}}
             cout<<cnt<<endl;

        }}
   
    