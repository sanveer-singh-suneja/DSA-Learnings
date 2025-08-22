#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void divisor(int n) {
    vector<int> arr;
    for (int i=1;i<=sqrt(n);i++) {
        if (n%i==0) {
            arr.push_back(i);
            if (i != n / i) {          // avoid duplicate when i == n/i
                arr.push_back(n / i);  // corresponding pair divisor // example is perfect square 25 which gives 5 two times
            }
        }
    }
    sort(arr.begin(),arr.end());
    for (auto it:arr) {
        cout<<it<<" ";
    }
}
int main() {
    divisor(25);
}
