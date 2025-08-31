#include <iostream>
#include <vector>
using namespace std;

class Node {
    int data ;
    Node *next;
    Node* prev;
   Node (int data ,Node* next1,Node* prev1 ){
        this->data = data;
        this->next = next1;
        this->prev = prev1
    }
}
Node* findTail(Node* head) {
    if (!head) return nullptr; 
    while (head->next != NULL) {
        head = head->next;
    }
    return head;
}
class Solution {
  public:
   vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
    vector<pair<int,int>> ans;
    if (!head) return ans;

    Node* left = head;
    Node* right = findTail(head);


    while (left != NULL && right != NULL && left != right && left->prev != right) {
        int sum = left->data + right->data;

        if (sum == target) {
            ans.push_back({left->data, right->data});
            left = left->next;
            right = right->prev;
        } 
        else if (sum < target) {
            left = left->next;
        } 
        else {
            right = right->prev;
        }
    }

    return ans;
}
};


