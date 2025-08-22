// Step 1: gcd(20, 15)
// → Compute remainder: 20 % 15 = 5
// → gcd(20, 15) = gcd(15, 5)
//
// Step 2: gcd(15, 5)
// → 15 % 5 = 0
// → gcd(15, 5) = gcd(5, 0)
//
// Step 3:
// Since second number = 0, gcd = first number = 5
#include <iostream>
using namespace std;
int gcd(int n1, int n2) {
        while (n2 != 0) {
            int temp = n2;
            n2 = n1 % n2;  // remainder
            n1 = temp;
        }
        return n1;
    }
int main () {
    cout<<gcd(50,25);
}