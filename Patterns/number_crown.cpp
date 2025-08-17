#include <iostream>
using namespace std;
void numberCrown(int n) {
    // Write your code here.
    int till = 2*(n-1);
    for(int j=1;j<=n;j++){
        for(int i=1;i<=j;i++){
            cout<<i<<" ";
        }
        //space
        for(int i=1;i<=till;i++){
            cout<<" ";
        }
        //number
        for(int i=j;i>=1;i--){
            cout<<i<<" ";
        }
        cout<<endl;
        till=till-2;
    }
    
}