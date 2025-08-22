#include <iostream>
#include <cmath>
using namespace std;
// int countdigit(int n) {
//     int count=0;
//     while (n!=0) {
//         n=n/10;
//         count++;
//     }
//     cout<<count;
// }

// more efficient for time complexity
int countdigit(int n) {
    int count = int(log10(n)+1);
    return count;
}
int main() {
    cout<<countdigit(564);

}