#include "src/Person/Person.hpp"

#include <iostream>
#include <string>

int main(void) {
  Person p1 = Person();
  Person p2 = Person();

  cout << "P1:" << endl;
  p1.show();

  cout << "P2:" << endl;
  p2.show();

  p1.setName("Pedro Martins");
  p2.setName("Danilo Corrêa");

  p1.setAge(21);
  p2.setAge(22);

  p1.setHeight(1.63);
  p2.setHeight(1.72);

  cout << "===================" << endl;

  cout << "P1:" << endl;
  p1.show();

  cout << "P2:" << endl;
  p2.show();

  return 0;
}
