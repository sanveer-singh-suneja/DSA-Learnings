#include <iostream>
#include <cmath>
using namespace std;
bool armstrong(int n) {
    int count = int(log10(n)+1);
    int sum =0;
    int d=0;
    d=n;
    while (n!=0) {
        int last=n%10;
        n=n/10;
        sum = sum + pow(last,count);
    }
    if (sum==d) {
        return 1;
    }
    else return 0;
}
int main() {
    cout<<armstrong(153);
}
