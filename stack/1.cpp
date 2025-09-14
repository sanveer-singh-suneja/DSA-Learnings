#include <iostream>
using namespace std;
class stlImpl {
public:
    int top = -1;
    int st[10];
    void push(int n) {
        if (top>=10) {cout<<"Out of range";}
        top=top+1;
        st[top]=n;
    }
    int peek() {
        if (top == -1) {cout<<"No element in stack";}
        return st[top];
    }
    void pop() {
        if (top==-1){cout<<"No element is there to pop";}
        top = top -1;
    }
    int size() {
        if (top==-1){cout<<"size if stack is 0";}
        return top+1;
    }
};
int main() {
    stlImpl s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;
    cout << "Stack size: " << s.size() << endl;

    return 0;
}