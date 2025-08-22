#include <iostream>
using namespace std;
bool palindrome(int n) {
        if(n<0){
            return false;
        }
        int d=0;
        d=n;
        long long reverse = 0;
        while (n!=0) {
            int last = n%10;
            reverse = reverse*10+last;
            n=n/10;
        }
        return (reverse==d);

}
int main() {
    cout<<palindrome((121));
}
