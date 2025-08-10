#include <iostream>
using namespace std;
int main() {
    int row;
    cin>>row;
    int middle = 2*(row-1)/2;
    for (int i=0; i<row;i++) {
        for (int j=middle+1; j<=i;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}
