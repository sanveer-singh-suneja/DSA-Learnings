#include <iostream>
using namespace std;
int main() {
    int row;
    cin>>row;
    for (int i=0; i<row;i++) {
        for (int j=0; j<=i;j++) {
            char ch = char(j+65);
            cout<<ch;
        }
        cout<<endl;
    }
}
