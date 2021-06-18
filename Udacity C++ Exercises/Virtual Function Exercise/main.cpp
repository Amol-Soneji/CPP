// Example solution for Shape inheritance
#include <assert.h>
#include <cmath>

// TODO: Define pi
#define PI 3.14159

// TODO: Define the abstract class Shape
class Shape
{
  virtual double Area() const = 0;
  virtual double Perimeter() const = 0;
  // TODO: Define public virtual functions Area() and Perimeter()
  // TODO: Append the declarations with = 0 to specify pure virtual functions
};

class Rectangle : public Shape
{
// TODO: Define Rectangle to inherit publicly from Shape
  public:
  // TODO: Declare public constructor
  Rectangle(double wid, double hgt) : width(wid), height(hgt) {}
  // TODO: Override virtual base class functions Area() and Perimeter()
  double Area() const {return (width * height);}
  double Perimeter() const {return ((2 * width) + (2 * height));}
  private:
    double width {0.0};
    double height {0.0};
  // TODO: Declare private attributes width and height
};

class Circle : public Shape
{
// TODO: Define Circle to inherit from Shape
  public:
  // TODO: Declare public constructor
    Circle(double rad) : radius(rad) {}
  // TODO: Override virtual base class functions Area() and Perimeter()
    double Area() const {return (PI * pow(radius, 2.0));}
    double Perimeter() const {return (2 * PI * radius);}
  
  private:
    double radius {0.0};
  // TODO: Declare private member variable radius
};

// Test in main()
int main() {
  double epsilon = 0.1; // useful for floating point equality

  // Test circle
  Circle circle(12.31);
  assert(abs(circle.Perimeter() - 77.35) < epsilon);
  assert(abs(circle.Area() - 476.06) < epsilon);

  // Test rectangle
  Rectangle rectangle(10, 6);
  assert(rectangle.Perimeter() == 32);
  assert(rectangle.Area() == 60);
}
