/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> preorder(Node* root) {
       vector <int> ans;
       if( root == nullptr){
           return ans;
       }
      stack<Node*> st;
      st.push(root);
      while(!st.empty()){
          Node* curr = st.top();
          st.pop();
          ans.push_back(curr->data);
          if(curr->right!= nullptr) st.push(curr->right);
          if(curr->left!= nullptr) st.push(curr->left);
      } 
       return ans ;
    }
};
class Solution2 {
  public:
    vector<int> preorder(Node* root) {
        if (root == nullptr) {
            return {};   // return empty vector
        }

        vector<int> ans;
        ans.push_back(root->data);

        // get preorder of left and right
        vector<int> left = preorder(root->left);
        vector<int> right = preorder(root->right);

        // merge results
        ans.insert(ans.end(), left.begin(), left.end());
        ans.insert(ans.end(), right.begin(), right.end());

        return ans;
    }
};
