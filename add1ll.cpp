#include <iostream>
using namespace std;

class Node {

    int data;
    Node* next;

    Node (int data, NOde*next1){
        this->data =data;
        this->next = next1;
    }
}

Node* arraytoLL(vector<int>&arr){
    NOde* head = new Node(arr[0],nullptr);
    Node* temp = head;
    for(int i =1 ; i<arr.size();i++){
        NOde* mover = new Node(arr[i],nullptr)
        temp->next = mover;
        temp = mover;
    }
    return head;
}




int main (){

    vector<int> arr {1,3,5,6};

    Node* head  = arraytoLL(arr);

    Node* temp = head ;
    while(temp!=nullptr){
        cout<< temp->next<<" ";
        temp = temp->next
    }

}