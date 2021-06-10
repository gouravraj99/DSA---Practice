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

// Reversing a Linked List and returning the head of the new linked list

// recursively
Node* reverse(Node* p){
  if(p->next == NULL){
    return p;
  }

  Node* ret = reverse(p->next);
  p->next->next = p;
  p->next = NULL;

  return ret; 
}



// Reversing iteratively


Node* reverse_itr(Node* head){
  if(head == NULL)
    return head;

  Node* nxt = head->next , *prev = head, *last = NULL;


  while(nxt!=NULL){
    Node* temp = nxt->next;
    nxt->next = prev;
    prev->next = last;
    last = prev;
    prev = nxt;
    nxt = temp;
  }


  return prev;
}



void print(Node* head){
  while(head!=NULL){
    cout<<head->data<<" ";
    head = head->next;
  }
  cout<<endl;
}



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

  print(l);

  

  print(reverse_itr(l));

  return 0;
}
