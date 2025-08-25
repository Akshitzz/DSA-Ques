#include <iostream>
#include <vector>
using namespace std;

struct Node{
    int data; 
    Node* next;
    Node (int data ,Node* next1 ){
        this->data = data;
        this->next = next1;
    }
};

Node* arraytoLL(vector<int>& arr){
     if (arr.empty()) return nullptr; // handle empty case
    Node* head  = new Node(arr[0],nullptr);
    Node* mover = head ;
    for (int i=1 ;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
// mover is a pointer to the last node so far.
// Every node has a next (which is a pointer to the next node).
// mover->next = temp;
// This line sets the next pointer of the current node (mover) to point to the new node (temp)
// 👉 Meaning: “Link the current last node to the new node.
// 2. mover = temp;
// Now that the new node (temp) has been added, we need to move our pointer (mover) forward.
// This line updates mover to point to the newly added node.
// 👉 Meaning: “Shift mover so it always points to the last node in the list.”

int lengthofLL(Node* head){
    int length = 0;
    Node* temp = head;
    while (temp != nullptr){
        temp = temp->next;
        length++;
    }
    return length;
}
int CheckifPresent(Node*head ,int val){
    Node*temp = head ;
    while(temp!=nullptr){
        if(temp->data==val) return 1;
        temp = temp->next;
    }
}

int main() {
     vector <int> arr = {1,2,4,56};
       Node* head = arraytoLL(arr);

       Node *temp = head;
        while (temp != NULL) {
            cout <<temp->data << " ";
            temp = temp->next;
        }
        cout << lengthofLL(head) << endl;
        cout << CheckifPresent(head,4) << endl;
        cout << CheckifPresent(head,10) << endl;

    return 0;

}