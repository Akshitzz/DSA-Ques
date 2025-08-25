#include <iostream>
#include <vector>

using namespace std;

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
Node* reverseLL(Node* head ){
    Node* prev = nullptr;
    Node8 current = head;
    while(current!= nullptr){
        Node* next = current->next;
        current->next = prev;
        prev = current;
        current= next;
    }
    return prev;
}

bool isPlaindrome (Node*head){
    //  finding the middle of linked list
  Node* slow = head ;
  Node* fast= head;
  while(fast->next && fast->next->next){
    slow=slow->next;
    fast=fast->next->next;
  }
  slow->next= reverseLL(slow->next);
  Node* first = head;
  Node* second = slow->next;
  while(second!=nullptr){
    if(first->data!=second->data)return  fasle;
    first=first->next;
    second=second->next;
  }
  return true;
    
}
int  main(){
 vector <int> arr = {1,2,4,56};
       Node* head = arraytoLL(arr);

}