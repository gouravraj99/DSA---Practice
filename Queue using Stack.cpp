#include<bits/stdc++.h>
using namespace std;

// 


class QueueS {

  stack<int> s1, s2;
public:

  void PUSH(int x) {
    s1.push(x);
  }


  int POP() {
    if (s1.empty())return -1;


    int n = s1.size(), x;


    n--;
    while (n--) {
      s2.push(s1.top());
      s1.pop();
    }


    x = s1.top();
    s1.pop();


    while (!s2.empty()) {
      s1.push(s2.top());
      s2.pop();
    }


    return x;

  }


};




int main() {

  QueueS s1;
  s1.PUSH(1);
  s1.PUSH(2);
  s1.PUSH(3);
  cout << s1.POP() << endl;
  cout << s1.POP() << endl;
  cout << s1.POP() << endl;
  cout << s1.POP() << endl;
  s1.PUSH(7);
  s1.PUSH(11);
  cout << s1.POP() << endl;
  cout << s1.POP() << endl;



  return 0;
}
