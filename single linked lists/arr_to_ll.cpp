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
int LengthLL(Node* head) {
    int count=0;
    Node* temp= head;
    while (temp) {
        cout<<temp->data<<" ";
        temp = temp->next;
        count++;
    }
    return count;
}
int checkifpresent(Node* head, int val) {
    Node* temp = head;
    while (temp) {
        if (temp->data==val) {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}
int main() {
vector <int> arr={2,3,8,7};
    Node* head = convertArr2LL(arr);
    // Node* temp= head;
    // while (temp) {
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }
    // cout<<LengthLL(head);
    cout<< checkifpresent(head,4);
}