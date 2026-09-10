#include <iostream>
#include "Triangle.h"

int Square(int a, int h) {
    return 0.5 * a * h;
}

int main() {
    std::cout << "Hello world!";
   
    double a, h;
    std::cout << "¬ведите сторону и высоту треугольника";
    std::cin >> a;
    std::cin >> h;
    std::cout << "ѕлощадь треугольника" << Square(a, h);

    double side, height;

    std::cout << "¬ведите сторону треугольника: ";
    std::cin >> side;
    std::cout << "¬ведите высоту, проведЄнную к этой стороне: ";
    std::cin >> height;

    Triangle t(side, height);
    std::cout << "ѕлощадь треугольника: " << t.getArea() << std::endl;

    return 0;
}