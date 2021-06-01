#include <cassert>

// TODO: Declare Vehicle as the base class
class Vehicle
{
    public:
        int wheels {0};
};

// TODO: Derive Car from Vehicle
class Car : public Vehicle
{
    public:
        bool trunk {false};
};

// TODO: Derive Sedan from Car
class Sedan : public Car
{    
    public:
        Sedan(int wheel, bool hasTrunk, int numbSeats) 
        {
            wheels = wheel;
            trunk = hasTrunk;
            seats = numbSeats;
        }
        int seats {0};
};

// TODO: Update main to pass the tests
int main() {
  Sedan sedan(4, true, 4);
  assert(sedan.trunk == true);
  assert(sedan.seats == 4);
  assert(sedan.wheels == 4);
}
