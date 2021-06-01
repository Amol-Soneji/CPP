#include <assert.h>

// Declare class Rectangle
class Rectangle;//Added a forward declaration.  

// Define class Square as friend of Rectangle
class Square
{
    public:
// Add public constructor to Square, initialize side
        Square(int sides) : side(sides){}
    // Add friend class Rectangle
        friend class Rectangle;
    // Add private attribute side
    private:
        int side {0};
};
// Define class Rectangle
class Rectangle
{
    public:
        Rectangle(Square&);
    // Add public function to Rectangle: Area()
        int Area();
    // Add private attributes width, height;
    private:
        int width {0};
        int height {0};
};
// Define a Rectangle constructor that takes a Square
Rectangle::Rectangle(Square &sqr)
{
    width = sqr.side;
    height = sqr.side;
}

// Define Area() to compute area of Rectangle
int Rectangle::Area()
{
    return (width * height);
}

// Update main() to pass the tests
int main()
{
    Square square(4);
    Rectangle rectangle(square);
    assert(rectangle.Area() == 16); 
}
