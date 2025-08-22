#include <iostream>
using namespace std;
void alphaHill(int n) {
    // Write your code here.
    for (int i=1;i<=n;i++){
        //space
        for(int j=n;j>i;j--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            char ch = char(j+64);
            cout<<ch<<" ";
        }
        for(int j=i-1;j>0;j--){
            
            char ch = char(j+64);
            cout<<ch<<" ";
        }
        for(int j=n;j>0;j--){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main () {
    alphaHill(3);
}