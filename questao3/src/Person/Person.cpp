#include "./Person.hpp"

#include <iostream>
#include <string>

using namespace std;

string Person::getName() { return name; }

void Person::setName(string aName) { name = aName; }

int Person::getAge() { return age; }

void Person::setAge(int aAge) { age = aAge; }

float Person::getHeight() { return height; }

void Person::setHeight(float aHeight) { height = aHeight; }

void Person::show() {
  cout << "Name: " << getName() << endl;
  cout << "Age: " << getAge() << endl;
  cout << "Height: " << getHeight() << endl;
}
