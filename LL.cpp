#include <iostream>
#include <vector>
using namespace std;

// defining a linked list node 
struct Node{
    int data; 
    Node* next;
    Node (int data ,Node* next1 ){
        this->data = data;
        this->next = next1;
    }
};


int main() {
     vector <int> arr = {1,2,4,56};
    Node *y = new Node(10,nullptr); // create a pointer y that points to a this new node 
    cout<<y->data;

     Node z(20, nullptr);       // create an object z of type Node
    cout << z.data << endl;

    return 0;

}
// Here p is not a Node, it’s a pointer to a Node, so you can’t write p.data.
// Instead, p->data is shorthand for (*p).data.