#include <iostream>
using namespace std;
int main() {
    int row,col;
    cin>>row>>col;
    for (int i=0;i<row;i++) {
        for (int j=0;j<col;j++) {
            char ch = char(j+65);
            cout<<ch;
        }
        cout<<endl;
    }
}