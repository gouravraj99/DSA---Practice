#include<bits/stdc++.h>
using namespace std;

// Finding middle element of a Linked List

struct Node {
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    next = NULL;
  }
};

Node* Mid(Node* head) {
  Node* hare = head, *tor = head;

  while (hare != NULL && hare->next != NULL ) {
    hare = hare->next->next;
    tor = tor->next;
  }

  return tor;
}

int main() {
  Node* l = new Node(1);
  l->next = new Node(2);
  l->next->next = new Node(3);
  l->next->next->next = new Node(4);
  l->next->next->next->next = new Node(5);

  cout<<Mid(l)->data;
  return 0;
}
