#include "src/Circle/Circle.hpp"

#include <iostream>

using namespace std;

int main() {
  Circle c1 = Circle();

  c1.setRadium(2.5);

  cout << "Radium: " << c1.getRadium() << endl;
  cout << "Area: " << c1.getArea() << endl;
  cout << "Circumference: " << c1.getCircunference() << endl;

  return 0;
}
