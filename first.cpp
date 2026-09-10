#include <iostream>

int Square(int a, int h) {
    return 0.5 * a * h;
}

int main() {
    std::cout << "Hello world!" << std::endl;
    return 0;
    std::cout << "¬ведите сторону и высоту треугольника";
    std::cin >> a;
    std::cin >> h;
    std::cout << "ѕлощадь треугольника" << Square(a, h);
}