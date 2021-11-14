#include <iostream>
#include <stdlib.h>
using namespace std;

int count = 0;
void A();
void Ab();
void B();
void Bb();
void C();
string expr;
int main() {
  cin >> expr;
  int l = expr.length();
  expr += "$";
  A();
  if (l == count)
    cout << "Accepted" << endl;
  else
    cout << "Rejected" << endl;
}
void A() {
  cout << "A->BA'" << endl;
  B();
  Ab();
}
void Ab() {
  if (expr[count] == '+') {
    count++;
    cout << "A'->+BA'" << endl;
    B();
    Ab();
  }
  else if (expr[count] == '-') {
    count++;
    cout << "A'->-BA'" << endl;
    B();
    Ab();
  }
  else {
    cout << "A'->null" << endl;
  }
}
void B() {
  cout << "B->CB'" << endl;
  C();
  Bb();
}
void Bb() {
  if (expr[count] == '*') {
    count++;
    cout << "B'->*CB'" << endl;
    C();
    Bb();
  }
  else if (expr[count] == '/') {
    count++;
    cout << "B'->/CB'" << endl;
    C();
    Bb();
  }
  else {
    cout << "B'->null" << endl;
  }
}
void C() {
  if (isalpha(expr[count])) {
    count++;
    cout << "C->id" << endl;
  } else if (isdigit(expr[count])) {
    count++;
    cout << "C->digit" << endl;
  } else if (expr[count] == '(') {
    count++;
    cout << "C->(A)" << endl;
    A();
    if (expr[count] != ')') {
      cout << "Rejected" << endl;
      exit(0);
    }
    count++;
  } else {
    cout << "Rejected" << endl;
    exit(0);
  }
}
