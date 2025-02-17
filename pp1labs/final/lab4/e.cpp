#include <iostream>
using namespace std ;
int main () {
    int n;
    cin >>n;
    int a[n][n]={} ;
    
    for ( int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
       cin >> a[i][j];}}
       bool isPerfect = true;
 
      for ( int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
       cin >> a[i][j];
       if(i == j || i-1 == j || j-1 == i){
        continue;
       }
       else{
        isPerfect = false;
       break ;}}
       if(!isPerfect) 
       break;}
       if(isPerfect){
        cout<<"Perfect.";
       }
       else{
        cout<<"Not perfect.";

       }
      return 0;}