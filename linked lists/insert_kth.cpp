#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};
Node* convertArr2LL(vector<int> &arr) {
    Node* head= new Node(arr[0]);
    Node* mover = head;
    for (int i=1;i<arr.size();i++) {
        Node* temp = new Node(arr[i]);
        mover-> next = temp;
        mover = temp; // or mover = mover->next
    }
    return head;
}
Node* insertK(Node* head, int k, int val) {

}
void printLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main () {
    vector<int> arr = {2,66,4};
    Node* head = convertArr2LL(arr);
    head = inserttail(head,100);
    printLL(head);
}
