#include <iostream>

using namespace std;

class Figure
{
public:
    virtual double getSquare() = 0;
    virtual double getImage() = 0;
    virtual void showFigureType() = 0;
};

class Rectangle : public Figure
{
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h)
    {
    }
    double getSquare() override
    {
        return width * height;
    }
    double getImage() override
    {
        
    }
    void showFigureType()
    {
        std::cout << "Rectangle" << std::endl;
    }
};

class Circle : public Figure
{
private:
    double radius;
public:
    Circle(double r) : radius(r)
    {
    }
    double getSquare() override
    {
        return radius * radius * 3.14;
    }
    double getImage() override
    {
        
    }
    void showFigureType()
    {
        std::cout << "Circle" << std::endl;
    }
};

class Triangle : public Figure
{
private:
    double width;
    double height;
public:
    Triangle(double w, double h) : width(w), height(h)
    {
    }
    double getSquare() override
    {
        return 0.5 * width * height;
    }
    double getImage() override
    {
        
    }
    void showFigureType()
    {
        std::cout << "Triangle" << std::endl;
    }
};

class Parallelepiped : public Figure
{
private:
    double width;
    double height;
    double length;
public:
    Parallelepiped(double w, double h, double l) : width(w), height(h), length(l)
    {
    }
    double getSquare() override
    {
        return height * height * height;
    }
    double getImage() override
    {

    }
    void showFigureType()
    {
        std::cout << "Cube" << std::endl;
    }
};

class Ball : public Figure
{
private:
    double radius;
public:
    Ball(double r) : radius(r)
    {
    }
    double getSquare() override
    {
        return radius * radius * radius * 4, 19;
    }
    double getImage() override
    {

    }
    void showFigureType()
    {
        std::cout << "Ball" << std::endl;
    }
};