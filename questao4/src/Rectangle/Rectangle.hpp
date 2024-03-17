#ifndef _RECTANGLE_H
#define _RECTANGLE_H

class Rectangle {
private:
  float width;
  float height;

public:
  float getHeight();
  void setHeight(float value);

  float getWidth();
  void setWidth(float value);

  float getArea();

  float getPerimeter();
};

#endif
