#ifndef _PERSON_H
#define _PERSON_H

#include <string>

using namespace std;

class Person {
private:
  string name;
  int age;
  float height;

public:
  string getName();
  void setName(string aName);

  int getAge();
  void setAge(int aAge);

  float getHeight();
  void setHeight(float aHeight);

  void show();
};
#endif
