#include <iostream>
using namespace std;
int gcd(int n1, int n2) {
    int chota =0;
    int gcd=1;
    if (n1>n2) {
        chota = n2;
    }
    else {
        chota =n1;
    }
    for (int i=chota;i>0;i--) {
        if (n1%i==0 and n2%i==0) {
            return i;
        }
    }
    return 1;
}
int main () {
    cout<<gcd(50,25);
}