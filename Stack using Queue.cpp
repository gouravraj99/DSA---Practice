#include<bits/stdc++.h>
using namespace std;
// 

class StackQ{

queue<int> q1, q2;
public:
int POP() {
  if (q1.empty() && q2.empty()) {
    // cout << "Stack Underflow!!" << endl;
    return -1;
  }

  if (!q1.empty()) {
    int n = q1.size();
    n--;
    while (n--) {
      q2.push(q1.front());
      q1.pop();
    }
    int x = q1.front();
    q1.pop();
    return x;
  }

  int n = q2.size();
  n--;
  while (n--) {
    q1.push(q2.front());
    q2.pop();
  }
  int x = q2.front();
  q2.pop();
  return x;
}


void PUSH(int x) {
  if (q1.empty())
    q2.push(x);
  else
    q1.push(x);
}

};

int main() {


  StackQ s1;
  s1.PUSH(1);
  s1.PUSH(2);
  s1.PUSH(3);
  cout<<s1.POP()<<endl;
  cout<<s1.POP()<<endl;
  cout<<s1.POP()<<endl;
  cout<<s1.POP()<<endl;
  s1.PUSH(7);
  cout<<s1.POP()<<endl;
  cout<<s1.POP()<<endl;
  


  return 0;
}
