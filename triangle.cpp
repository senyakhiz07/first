#include "Triangle.h"

Triangle::Triangle(double side, double height) {
    setSide(side);
    setHeight(height);
}

double Triangle::getArea() const {
    return 0.5 * side * height;
}

double Triangle::getSide() const {
    return side;
}

double Triangle::getHeight() const {
    return height;
}

void Triangle::setSide(double side) {
    this->side = side;
}

void Triangle::setHeight(double height) {
    this->height = height;
}