#include <cassert>
#include <cmath>
#include <stdexcept>

class Sphere {
 public:
  static float Volume(int radius)
  {
      if(radius <= 0)
          throw std::invalid_argument("Invalid value for radius.  ");
      return ((4 * pi_ * pow(radius, 3))/3);
  }
 private:
  static float constexpr pi_{3.14159};
};

// Test
int main(void) {
  assert(abs(Sphere::Volume(5) - 523.6) < 1);
}
