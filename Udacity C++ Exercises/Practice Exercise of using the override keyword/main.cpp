#include <assert.h>
#include <cmath>

// TODO: Define PI
#define PI 3.14159

// TODO: Declare abstract class VehicleModel
class VehicleModel
{
  // TODO: Declare virtual function Move()
    virtual void Move(double v, double theta) = 0;
};

// TODO: Derive class ParticleModel from VehicleModel
class ParticleModel : public VehicleModel
{
    public:
  // TODO: Override the Move() function
        void Move(double v, double theta_) override
        {
            theta += theta_;//In an instantaneous steering model phi = theta. 
            x += v * cos(theta);
            y += v * cos (theta);
        }
  // TODO: Define x, y, and theta
        double x {0.0};
        double y {0.0};
        double theta {0.0};
};

// TODO: Derive class BicycleModel from ParticleModel
class BicycleModel : public ParticleModel
{
    public:
  // TODO: Override the Move() function
        void Move(double v, double theta) override
        {
            theta += v / (L * tan(theta));// Similar as above, in this situation phi = theta.  
            x += v * cos(theta);
            y += v * cos(theta);
        }
  // TODO: Define L
        double L {1};//Assume for example that L is 1.  
};

// TODO: Pass the tests
int main() {
  // Test function overriding
  ParticleModel particle;
  BicycleModel bicycle;
  particle.Move(10, PI / 9);
  bicycle.Move(10, PI / 9);
  assert(particle.x != bicycle.x);
  assert(particle.y != bicycle.y);
  assert(particle.theta != bicycle.theta);
}
