#include<bits/stdc++.h>
using namespace std;

// Structure of a node of a tree
struct Node{
  int data;
  Node* left,*right;

  Node(int data){
    this->data = data;
    left = right = NULL;
  }
};


// Function to find the height of a tree

int height(Node* root){
  if(root == NULL)return 0;
  return 1 + max(height(root->left),height(root->right));
}


int main(){
  Node* root = new Node(1);

  root->left = new Node(2);
  root->right = new Node(3);
  root->right->left = new Node(5);
  root->right->left->left = new Node(8);


  cout<<height(root);


  return 0;

}
