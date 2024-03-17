#include "./Rectangle.hpp"

float Rectangle::getHeight() { return height; }

void Rectangle::setHeight(float value) { height = value; }

float Rectangle::getWidth() { return width; }

void Rectangle::setWidth(float value) { width = value; }

float Rectangle::getArea() { return height * width; }

float Rectangle::getPerimeter() { return 2 * (height + width); }
