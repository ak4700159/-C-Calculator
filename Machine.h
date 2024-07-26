#ifndef __MACHINE_H__
#define __MACHINE_H__

#include <iostream>
using namespace std;

class Machine{
private:
int num;
public:
Machine(int num) : num(num) {
  cout << "Machine(int num) called" << endl;
}

Machine(const Machine &machine) : num(machine.num) {
  set_test_value(20);
  cout << "Machine(const Machine &machine) called" << endl;
 }

 ~Machine(){
  cout << "~Machine() called" << endl;
 }

 void set_test_value(int num){
  this->num = num;
 }

 int get_test_value(){
  return this->num;
 }
};

#endif