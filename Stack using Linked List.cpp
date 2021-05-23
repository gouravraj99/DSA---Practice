#include<bits/stdc++.h>

using namespace std;


// Implementing Stack using Linked List

// LIFO

struct Node {
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    next = NULL;
  }
};

Node* head = NULL;

void Push(int data){
  if(head == NULL){
    head = new Node(data);
  }else{
    Node* new_node = new Node(data);
    new_node->next = head;
    head = new_node;
  }
}


int Pop(){
  if(head == NULL){
    cout<<"UnderFlow!! Stack is empty.\n";
    return -1;
  }

    int ret = head->data;
    head = head->next;
    return ret;
}

void printList() {
  Node* temp = head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}


int main(){
 
  Push(3);
  Push(2);
  Push(1);

  printList();

  Pop();
  Pop();

  printList();

  Pop();
  Push(8);
  Push(9);
  Push(0);
  Pop();

  printList();



  return 0;
}
