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
Node* deletevalue(Node* head, int val) {
    if (head==NULL) {
        return head;
    }
    if (head->data==val) {
        Node* temp= head;
        head= head->next;
        delete temp;
        return head;
    }
    Node* temp= head;
    Node* prev= NULL;
    while (temp!=NULL) {
        if (temp->data==val) {
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;

    }
    return head;
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
    head = deletevalue(head,66);
    printLL(head);
}
