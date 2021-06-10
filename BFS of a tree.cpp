#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node* left, *right;

  Node(int x): data(x), left(NULL), right(NULL) {}
};


void inorder(Node* root) {
  if (root != NULL) {
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
  }
}


Node* insert(Node* root, int data) {
  if (!root)
    return new Node(data);
  if (root->data < data)
    root->right = insert(root->right, data);
  else
    root->left = insert(root->left, data);

  return root;
}

// Implementing Breadth First Search in a tree
void BFS(Node* root) {
  queue<Node*> q;
  q.push(root);

  while (!q.empty()) {
    Node* p = q.front();
    q.pop();
    cout << p->data << " ";

    if(p->left)
      q.push(p->left);
    if(p->right)
      q.push(p->right);
  }
  cout<<endl;
  return;
}



int main() {


  Node* root = insert(NULL, 6);

  insert(root, 8);
  insert(root, 1);
  insert(root, 5);
  insert(root, 9);
  insert(root, 3);
  insert(root, 0);

  inorder(root);
  cout<<endl;

  BFS(root);





  return 0;
}
