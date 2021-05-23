#include<bits/stdc++.h>

using namespace std;

// Implementing Stack

// LIFO


int sstack[100]={0};
int top = -1;


void push(int data){
  if(top == 99){
    cout<<"Stack Overflow\n";
    return;
  }
  sstack[++top] = data;
}


int pop(){
  if(top == -1){
    cout<<"Stack Undeflow\n";
    return -1;
  }

  top--;
  return sstack[top+1];
}

void print(){
  for(int i=0;i<=top;++i){
    cout<<sstack[i]<<" ";
  }
  cout<<endl;
}

int main(){
  push(1);
  push(2);
  push(3);
  push(4);
  push(5);

  print();

  cout<<pop()<<endl;
  cout<<pop()<<endl;
  cout<<pop()<<endl;
  cout<<pop()<<endl;
  cout<<pop()<<endl;
  cout<<pop()<<endl;
  push(56);
  push(28);
  print();



  return 0;
}
