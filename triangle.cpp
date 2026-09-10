#pragma once

class Triangle {
private:
    double side;    // сторона треугольника
    double height;  // высота, проведённая к этой стороне

public:
    // Конструктор инициализации
    Triangle(double side, double height);

    // Метод вычисления площади
    double getArea() const;

    // Геттеры
    double getSide() const;
    double getHeight() const;

    // Сеттеры с проверками
    void setSide(double side);
    void setHeight(double height);
};