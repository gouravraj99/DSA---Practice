#include<bits/stdc++.h>
using namespace std;

// Structure of a node of a tree

struct Node{
  int data;
  Node* left, *right;

  Node(int data) {
    this->data = data;
    left = right = NULL;
  }
};


// Implementing Binary Search Tree

Node* root = NULL;


Node* insert(Node* root, int data) {
  if (root == NULL) {
    return new Node(data);
  } else if (root->data < data) {
    root->right = insert(root->right,data);
  } else {
    root->left = insert(root->left,data);
  }
  return root;
}


// search


bool search(Node* root,int data){
  if(root==NULL)return false;

  if(root->data == data)
    return true;
  if(root->data < data)
    return search(root->right,data);

  if(root->data > data)
    return search(root->left,data);
}


// Inorder Traveresal

void inorder(Node* root) {
  if (root != NULL) {
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
  }
}



int main() {

  Node* root = insert(NULL,5);
  insert(root,4);
  insert(root,7);
  insert(root,7);
  insert(root,1);
  insert(root,9);
  insert(root,8);
  insert(root,3);

  inorder(root);


  cout<<endl<<search(root,4)<<endl;
  cout<<search(root,14)<<endl;
  cout<<search(root,7)<<endl;
  cout<<search(root,3)<<endl;


  return 0;
}
