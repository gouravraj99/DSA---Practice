#include<bits/stdc++.h>
using namespace std;



struct Node {
  int data;
  Node* left, *right;
  Node(int data) {
    this->data = data;
    left = right = NULL;
  }
};



// implementing BST (Binary Search Tree)


Node* insert(int data, Node* root) {
  if (!root)return new Node(data);

  if (root->data > data) {
    root->left = insert(data, root->left);
  } else {
    root->right = insert(data, root->right);
  }
  return root;
}


// inorder


void inorder(Node* root) {
  if (root) {
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
  }
}

// Level order


void level_order(Node* root) {
  if (!root)return;

  queue<Node*> q;
  q.push(root);
  while (!q.empty()) {
    Node* temp = q.front();
    q.pop();
    cout << temp->data << " ";
    if (temp->left)
      q.push(temp->left);
    if (temp->right)
      q.push(temp->right);
  }
  return;
}


// level order in spiral form

void level_order_spiral(Node* root) {
  if (!root)return;
  stack<Node*>s[2];
  s[0].push(root);
  int f = 0;
  while (true) {

    while (!s[f].empty()) {
      cout << s[f].top()->data << " ";
      if (!f) {
        if (s[f].top()->left )
          s[!f].push(s[f].top()->left);
        if (s[f].top()->right )
          s[!f].push(s[f].top()->right);
      } else {
        if (s[f].top()->right )
          s[!f].push(s[f].top()->right);
        if (s[f].top()->left )
          s[!f].push(s[f].top()->left);
      }
    }
    f = !f;
    if (s[f].empty())
      return;

  }

  return;

}


// bottom view

void bottom(Node* root){
  if(!root)return;
  map<int,int>mp;

  queue<pair<Node*,int>>q;
  q.push({root,0});

  while(!q.empty()){
    Node* temp = q.front().first;
    int k = q.front().second;
    q.pop();
    mp[k] = temp->data;
    if(temp->left)
      q.push({temp->left,k-1});
    if(temp->right)
      q.push({temp->right,k+1});
  }

  for(auto e: mp){
    cout<<e.second<<" ";
  }

  return;
}

int main() {



  Node* root = insert(5, NULL);
  insert(6, root);
  insert(2, root);
  insert(3, root);
  insert(9, root);
  insert(1, root);
  inorder(root); cout << endl;
  level_order(root); cout << "\n";
  // level_order_spiral(root);
  cout<<"bottom view\n";
  bottom(root);




  return 0;
}
