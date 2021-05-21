#include<bits/stdc++.h>

using namespace std;


// Implementing Linked List

struct Node {
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    next = NULL;
  }
};

Node* head = NULL;
Node* tail = NULL;

void insert(int data) {
  if (head == NULL) {
    head = tail = new Node(data);
  } else {
    tail->next = new Node(data);
    tail = tail->next;
  }
}

void printList() {
  Node* temp = head;
  while(temp!=NULL){
    cout<<temp->data<<endl;
    temp = temp->next;
  }
}


int main(){
  insert(3);
  insert(2);
  insert(1);


  //Printing the List


  printList();


  return 0;
}
