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
    for (int i=0 ;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main() {
     vector <int> arr = {1,2,4,56};
       Node* head = arraytoLL(arr);
       Node *temp = head;
        while (temp != NULL) {
            cout <<temp->data << " ";
            temp = temp->next;
        }

    return 0;

}