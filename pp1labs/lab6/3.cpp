#include <bits/stdc++.h>
using namespace std;
int ns(int a , int b , int c ,int d){
    if(a>b && a > c && a > d)
     return a;
     else if(b>a && b > c && b > d)
       return b;
      else if(c>a && c > b && c > d)
       return c;
        else if(d>a && d > c && d > b)
         return d;
         
}
int main (){
    int a;
    int b;
    int c;
    int d;
    cin >>a >> b >> c >> d;
    int m = ns(a,b,c,d);
        
   
    cout << m;

}