#include "src/Rectangle/Rectangle.hpp"

#include <iostream>

using namespace std;

int main(void) {
  Rectangle r1 = Rectangle();

  r1.setWidth(12);
  r1.setHeight(5);

  cout << "Width: " << r1.getWidth() << endl;
  cout << "Height: " << r1.getHeight() << endl;
  cout << "Area: " << r1.getArea() << endl;
  cout << "Perimeter: " << r1.getPerimeter() << endl;

  return 0;
}
