#include <iostream>
using namespace std;
void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            char ch = char(j+64);
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}