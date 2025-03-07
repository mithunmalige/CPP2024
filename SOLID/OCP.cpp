/* open-close principle */
/* 1. opened for extension and 2. closed for modification */

#include <iostream>
#include <memory>
using namespace std;

class Shape 
{
    /* Violates the OCP */
    private:
    enum myShape {CIRCLE, TRIANGLE};

    public:
    void CalculateArea(std::shared_ptr<Shape>& shape)
    {

    }
};

/* With OCP */
class MyShape
{
    public:
    virtual void SelectShape() = 0; 
};

class Circle : public MyShape
{
    public:
    void SelectShape()
    {

    }
};

class Triangle : public MyShape
{
    public:
    void SelectShape()
    {

    }
};

class CalculateArea
{
    public:
    void calculateArea(std::shared_ptr<MyShape> myShape)
    {

    }
};

int main()
{
    
    return 0; 
}

