#include<bits/stdc++.h>
using namespace std;


// Evaluating postfix using stack

bool alpha(char c) {
  if (c >= 'a' && c <= 'z')
    return true;
  return false;
}



int main() {
  string exp = "ab*cd*+e-";
  stack<string> s;

  for (char c : exp) {
    if (alpha(c)) {
      string k;
      k += c;
      s.push(k);
    } else {
      string op2 = s.top();
      s.pop();
      string op1 = s.top();
      s.pop();
      s.push(op1 + c + op2);
    }
  }


  cout << s.top() << endl;
  return 0;
}

