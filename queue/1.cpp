#include <iostream>
using namespace std;
class q {
    static const int size = 10;
public:

    int q1[size];
    int curr_size=0;
    int start =-1;
    int end =-1;

    void push(int n) {
        if (curr_size==size) {
            cout<<"cannot push as size exceeds";

        }
        if (curr_size==0) {
            start = 0;
            end=0;
        }
        else {
            end=(end+1)%size;
            q1[end]=n;
            curr_size+=1;
        }
    }
    int pop() {
        if (curr_size==0) {
            cout<<"no element to pop";
        }
        int cd = q1[start];
        if (curr_size==-1) {
            start = end =-1;
        }
        else {
            start = (start +1)%size;
            curr_size-=1;
        }
        return cd;
    }
    int top() {
        if (curr_size==0) {
            cout<<"no element";
        }
        return q1[start];
    }
    int size1() {
        return curr_size;
    }

};
int main () {
    q q1;
    q1.push(4);
    q1.push(5);
}