#pragma once
#include <cassert>
#include <cmath>
#include <iostream>

enum Colours
{
    None, Red, Blue, Green
};

class Shape
{

public:

    double x = 0, y = 0;
    int colour = None;
};


class Circle: public Shape
{
public:

    double Radius = 0;

    Circle(double inX, double inY, const std::string& inColour, double inRadius);

    double getDescribingRectangle() const;

    double getArea() const;
};

class Square: public Shape
{

public:

    double Side = 0;

    Square(double inX, double inY, double inSide, const std::string& inColour);

    double getArea() const;

    double getDescribingRectangle() const;
};

class EquilateralTriangle: public Shape
{
public:

    double Side;

    EquilateralTriangle(double inX, double inY, double inSide, const std::string& inColour);

    double getArea() const;

    double getDescribingRectangle() const;
};

class Rectangle: public Shape
{
public:

    double Side, Side2;

    Rectangle(double inX, double inY, double inSide, double inSide2, const std::string& inColour);

    double getDescribingRectangleSide1() const;

    double getDescribingRectangleSide2() const;

    double getArea() const;
};