#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node* left, *right;

  Node(int x): data(x), left(NULL), right(NULL) {}
};


Node* insert(Node* root, int data) {
  if (!root)
    return new Node(data);
  if (root->data < data)
    root->right = insert(root->right, data);
  else
    root->left = insert(root->left, data);

  return root;
}



// Printing left view of a tree
void left_view(Node* root){
  if(!root)
    return;

  queue<Node*> q;
  Node* wall = new Node(-1);
  q.push(root);
  q.push(wall);


  while(q.size()!=1){
    cout<<q.front()->data<<" ";

    while(true){
      Node* p = q.front();
      q.pop();

      if(p == wall){
        q.push(wall);
        break;
      }

      if(p->left)q.push(p->left);
      if(p->right)q.push(p->right);

    }
  }
}


int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  Node* root = insert(NULL, 6);

  insert(root, 8);
  insert(root, 1);
  insert(root, 5);
  insert(root, 9);
  insert(root, 3);
  insert(root, 0);

  left_view(root);





  return 0;
}
