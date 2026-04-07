#include <iostream>
#include <cmath>


class I2DShape {
public:
    virtual ~I2DShape() {}
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual const char* name() const = 0;
};