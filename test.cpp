#include <iostream>
using namespace std;

class Base{
public:
  Base(){
    cout << "base()" << endl;
  }
  void simpleFunc(){ cout << "hello" << endl; }
  int num;
};

class MiddleOne : public Base{
public:
  MiddleOne() : Base() {
    cout << "MiddleOne()" << endl;
  }
};

class MiddleTwo : public Base{
public:
  MiddleTwo() : Base(){
    cout << "MiddleTwo()" << endl;
  }
};

class Derived : public MiddleOne, public MiddleTwo{
public:
  Derived() : MiddleOne(), MiddleTwo(){
    cout << "Derived()" << endl;
  }
};

int main(void){
  Derived* tset = new Derived;
  return 0;
}