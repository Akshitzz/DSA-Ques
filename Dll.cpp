#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* back;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
        this->back = nullptr;
    }
};

Node* arrtoDLL(vector<int>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* temp = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* mover = new Node(arr[i]);
        temp->next = mover;
        mover->back = temp;
        temp = mover;
    }

    return head;
}

void ForwardTraversal(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


void BackwardTraversal(Node* tail){
    Node* temp = tail;
    while(temp!=nullptr ){
        cout << temp->data<< " ";
        temp = temp->back;
    }
    cout <<endl;
}


int main() {
    vector<int> arr = {1, 34, 5, 77, 9};
    Node* head = arrtoDLL(arr);

    ForwardTraversal(head);
    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }
    BackwardTraversal(tail);
}
