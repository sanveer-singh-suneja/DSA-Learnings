#include <iostream>
using namespace std;
void alphaRamp(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char ch = char(i+64);
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
