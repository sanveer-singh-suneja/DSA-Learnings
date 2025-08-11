#include <iostream>
using namespace std;
void printTriangle(int n) {
        // code here
    for (int i=0;i<n;i++) {
            // space
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            // star
            for (int j = 2 * n - (2 * i + 1); j > 0; j--) {
                cout << "*";
            }

            cout << endl;
        }
}
int main () {
    int n;
    cin >> n;
    printTriangle(n);
}
