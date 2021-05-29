#include <iostream>
#include <cmath>
#include <assert.h>

// Define pi
#define pi 3.14159

// Define Line Class
class LineSegment
{
    public:
        LineSegment(int l) : length(l){}
        LineSegment() {}
        int getLength() {return length;}
    // Define protected attribute length
    protected:
        int length{0};
};

// Define Circle subclass
class Circle
{
    public:
        Circle(LineSegment line)
        {
            setRadius(line);
        }
    // Define public setRadius() and getArea()
        void setRadius(LineSegment line)
        {
            try
            {
                if(line.getLength() < 1)
                    throw std::invalid_argument("Invalid length for line segment.  ");
                radi = line;
            }
            catch(...)
            {
                return;
            }
        }
        int getArea(){return (pi * pow(radi.getLength(), 2));}
    private:
        LineSegment radi;
};
    
// Test in main()
int main() 
{
    LineSegment radius {3};
    Circle circle(radius);
    assert(int(circle.getArea()) == 28);
}
