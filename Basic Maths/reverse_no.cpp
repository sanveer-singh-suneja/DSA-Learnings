#include <iostream>
using namespace std;
int reverse_no(int n) {
    int reverse = 0;
    while (n!=0) {
        int last = n%10;
        reverse = reverse*10+last;
        n=n/10;
    }
    return reverse;
}
int main() {
    cout<<reverse_no(-564);
}