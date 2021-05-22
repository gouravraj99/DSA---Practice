#include<bits/stdc++.h>
using namespace std;

// Implementing Queue using Linked List
// FIFO


struct Node {
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    next = NULL;
  }
};

Node *head=NULL, *tail=NULL;

void enqueue(int data) {
  if (head == NULL)
    head = tail = new Node(data);
  else {
    tail->next = new Node(data);
    tail = tail->next;
  }
}


int dequeue() {
  if (head == NULL) {
    cout << "Underflow! Queue is empty!\n";
    return -1;
  }

  int data = head->data;

  head = head->next;

  return data;
}


void print() {
  Node* temp = head;

  while (temp != NULL) {
    cout<<temp->data<<" ";
    temp = temp->next;
  }

  cout<<endl;

  return;
}


int main() {
  enqueue(1);
  enqueue(2);
  enqueue(3);

  print();

  dequeue();

  print();

  dequeue();
  dequeue();
  dequeue();

  enqueue(6);
  enqueue(8);

  print();


  return 0;
}
