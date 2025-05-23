// what is a linked list -> a linear data structure made by collection of nodes 
// node is a combination of data and address of next node 
// why linked list is needed  -> arr[10] ->run time size is fixed
// linked list -> run time size is not fixed
//  vector <int> v(5);

// new storgare is allocated in heap memory
// not optimal case 

// adnvantages of linked list
// no wastage of memory
// 1. dynamic size
// 2. efficient insertion and deletion
// 3. no need to shift elements
// 4. no need to allocate memory in advance
// 5. no need to declare size of linked list
// disadvantages of linked list
// 1. extra memory for pointer
// 2. no random access
// 3. not cache friendly
// 4. not easy to implement
// 5. not easy to
// types of linked list 
// singly linked list 
// doubly linked list 
// circular linked list
// circular doubly linked list
// singly linked list -> each node has data and address of next node
// doubly linked list -> each node has data and address of next node and address of previous node
// circular linked list -> last node points to first node
// circular doubly linked list -> last node points to first node and first node points to last node

// inseeriton of linekd list 
// 1. at beginning
// 2. at end





#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    // constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void InserAtHead(Node* &head, int d){

    // new node create 
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
// insertion at tail
void InserAtTail(Node* &tail, int d){
    // new node create 
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
// traversinging a linked list
void print(Node * &head){
        Node *temp = head;
        while(temp !=NULL){
            cout << temp ->data << " ";
            temp = temp->next;
        }
        cout <<endl;


};






int main (){

    Node * node1=new Node(10);
    // cout <<node1->data <<endl;
    // cout <<node1->next <<endl;
// insertion at head 
    Node *head = node1;
      Node* tail =node1;
    print(head);
    InserAtHead(head, 15);
    print(head);
    InserAtHead(head, 20);
    print(head);

    // insertion at end 
InserAtTail(tail, 25);
    print(head);
InserAtTail(tail, 30);
    print(head);
    return 0;
 
};