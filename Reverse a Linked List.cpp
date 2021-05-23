#include<bits/stdc++.h>
using namespace  std;

//Reversing a linked list




struct Node {
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    next = NULL;
  }
};


void Print(Node* head) {
  while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
};

// Function to reverse a list recursively


Node* reverse(Node* p) {
  if (p->next == NULL)
    return p;


  Node* ret = reverse(p->next) ;
  p->next->next = p;
  p->next = NULL;
  return ret;
}









int main() {
  Node* head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);



  Print(head);

  Print(reverse(head));


  return 0;
}
