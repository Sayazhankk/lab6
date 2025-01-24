#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;
int main(){
    string n;
    cin >> n;
    cout << "The anagram variants for string "<<n<<" are:";
    cout<<endl;


    sort(n.begin(),n.end());
      do {
        for (size_t i = 0 ;  i < n.size(); i++){

        cout <<  n[i] ;}
        cout << endl;
    } while (next_permutation(n.begin(), n.end()));

    return 0;

}
