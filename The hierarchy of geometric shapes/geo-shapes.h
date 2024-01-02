#pragma once
#include <cassert>
#include <cmath>

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

    Circle(double inX, double inY,const char *inColour, double inRadius): Radius(inRadius)
    {
        assert(inRadius > 0);

        assert(inColour == "red" || inColour == "blue" || inColour == "green");

        if (inColour == "red") colour = Red;
        else if (inColour == "blue") colour = Blue;
        else colour = Green;

        x = inX, y = inY;
    }

    double getDescribingRectangle() const
    {
        return Radius * 2;
    }

    double getArea() const
    {
        return atan(1.0) * 4 * Radius * Radius;
    }
};

class Square: public Shape
{

public:

    double Side = 0;

    Square(double inX, double inY, double inSide, const char *inColour): Side(inSide)
    {
        assert(inSide > 0);
        assert(inColour == "red" || inColour == "blue" || inColour == "green");

        if (inColour == "red") colour = Red;
        else if (inColour == "blue") colour = Blue;
        else colour = Green;

        x = inX, y = inY;
    }

    double getArea() const
    {
        return Side * Side;
    }

    double getDescribingRectangle() const
    {
        return Side;
    }
};

class EquilateralTriangle: public Shape
{
public:

    double Side;

    EquilateralTriangle(double inX, double inY, double inSide, const char *inColour): Side(inSide)
    {
        assert(inSide > 0);
        assert(inColour == "red" || inColour == "blue" || inColour == "green");

        if (inColour == "red") colour = Red;
        else if (inColour == "blue") colour = Blue;
        else colour = Green;

        x = inX, y = inY;
    }

    double getArea() const { return Side * Side * std::sqrt(3) / 4; }

    double getDescribingRectangle() const
    {
        return Side;
    }
};

class Rectangle: public Shape
{
public:

    double Side, Side2;

    Rectangle(double inX, double inY, double inSide, double inSide2, const char *inColour): Side(inSide), Side2(inSide2)
    {
        assert(inSide > 0);
        assert(inSide2 > 0);

        assert(inColour == "red" || inColour == "blue" || inColour == "green");

        if (inColour == "red") colour = Red;
        else if (inColour == "blue") colour = Blue;
        else colour = Green;

        x = inX, y = inY;
    }

    double getDescribingRectangleSide1() const
    {
        return Side;
    }

    double getDescribingRectangleSide2() const
    {
        return Side2;
    }

    double getArea() const { return Side * Side2; }
};