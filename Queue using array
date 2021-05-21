#include<bits/stdc++.h>

using namespace std;

// Implementing Queue

// FIFO

#define max 100

int qqueue[max] = {0};
int front = 0, rear = -1;


void enqueue(int data) {
  if (rear + 1 == max) {
    cout << "Queue is Full!" << endl;
    return;
  }

  qqueue[++rear] = data;
}


int dequeue() {
  if(front>rear){
    cout<<"Queue is empty!!\n";
    return -1;
  }

  front++;
  return qqueue[front-1];
}

void print() {
  for (int i = front; i <= rear; ++i) {
    cout << qqueue[i] << " ";
  }
  cout << endl;
}

int main() {
  enqueue(1);
  enqueue(2);
  enqueue(3);
  enqueue(4);
  enqueue(5);

  print();

  cout << dequeue() << endl;
  cout << dequeue() << endl;
  print();
  cout << dequeue() << endl;
  cout << dequeue() << endl;
  cout << dequeue() << endl;
  cout << dequeue() << endl;
  
  enqueue(56);
  enqueue(28);
  print();



  return 0;
}
