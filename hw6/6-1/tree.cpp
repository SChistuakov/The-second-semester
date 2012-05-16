#include "tree.h"

int Num::calc()
{
    return val;
}
 void Num::print()
 {
     cout << val << " ";
 }

 int Operation::calc()
 {
     int a = left->calc();
     int b = right->calc();

     switch (op)
     {
     case '+':
         return a + b;
     case '-':
         return a - b;
     case '*':
         return a * b;
     case '/':
         return a / b;
     }

 }
  void Operation::print()
  {
      cout << "( " << op << " ";
      left->print();
      right->print();
      cout << ") ";
  }

  void Operation::build(string &s)
  {
      s.erase(0, 1); // remove '('
      op = s[0];
      s.erase(0, 1); // remove op
      Operation *tmp;
      if (s[0] == '(')
      {
          tmp = new Operation();
          tmp->build(s);
          left = tmp;
      }
      else
          left = new Num(s[0] - '0');
      s.erase(0, 1); // remove num or ')'

      if (s[0] == '(')
      {
          tmp = new Operation();
          tmp->build(s);
          right = tmp;
      }
      else
          right = new Num(s[0] - '0');
      s.erase(0, 1);

  }
