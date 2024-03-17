#include "Circle.hpp"

const float PI = 3.14159265;

float Circle::getRadium() { return radium; }

void Circle::setRadium(float value) { radium = value; }

float Circle::getArea() { return PI * getRadium() * getRadium(); }

float Circle::getCircunference() { return 2 * PI * getRadium(); }
