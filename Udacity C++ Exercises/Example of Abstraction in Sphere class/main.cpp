#include <cassert>
#include <cmath>
#include <stdexcept>

// TODO: Define class Sphere
class Sphere {
 public:
  // Constructor
  Sphere(int radi)
  {
      radius = radi;
      volume = (4 * M_PI * pow(radius, 3.0)) / 3;
  }
  // Accessors
  int Radius() const {return radius;}
  double Volume() const {return volume;}

 private:
  // Private members
  int radius{0};
  double volume{0};
};

// Test
int main(void) {
  Sphere sphere(5);
  assert(sphere.Radius() == 5);
  assert(abs(sphere.Volume() - 523.6) < 1);
}
