#include <geo-shapes.h>

Circle::Circle(double inX, double inY, const std::string& inColour, double inRadius) : Radius(inRadius)
{
    assert(inRadius > 0);

    assert(inColour == "red" || inColour == "blue" || inColour == "green");

    if (inColour == "red") colour = Red;
    else if (inColour == "blue") colour = Blue;
    else colour = Green;

    x = inX, y = inY;
}

double Circle::getDescribingRectangle() const {
    return Radius * 2;
}

double Circle::getArea() const {
    return atan(1.0) * 4 * Radius * Radius;
}

Square::Square(double inX, double inY, double inSide, const std::string& inColour) : Side(inSide)
{
    assert(inSide > 0);
    assert(inColour == "red" || inColour == "blue" || inColour == "green");

    if (inColour == "red") colour = Red;
    else if (inColour == "blue") colour = Blue;
    else colour = Green;

    x = inX, y = inY;
}

double Square::getArea() const {
    return Side * Side;
}

double Square::getDescribingRectangle() const {
    return Side;
}

EquilateralTriangle::EquilateralTriangle(double inX, double inY, double inSide, const std::string& inColour) : Side(inSide)
{
    assert(inSide > 0);
    assert(inColour == "red" || inColour == "blue" || inColour == "green");

    if (inColour == "red") colour = Red;
    else if (inColour == "blue") colour = Blue;
    else colour = Green;

    x = inX, y = inY;
}

double EquilateralTriangle::getArea() const { return Side * Side * std::sqrt(3) / 4; }

double EquilateralTriangle::getDescribingRectangle() const { return Side; }

Rectangle::Rectangle(double inX, double inY, double inSide, double inSide2, const std::string& inColour) : Side(inSide), Side2(inSide2)
{
    assert(inSide > 0);
    assert(inSide2 > 0);

    assert(inColour == "red" || inColour == "blue" || inColour == "green");

    if (inColour == "red") colour = Red;
    else if (inColour == "blue") colour = Blue;
    else colour = Green;

    x = inX, y = inY;
}

double Rectangle::getDescribingRectangleSide1() const {
    return Side;
}

double Rectangle::getDescribingRectangleSide2() const {
    return Side2;
}

double Rectangle::getArea() const { return Side * Side2; }