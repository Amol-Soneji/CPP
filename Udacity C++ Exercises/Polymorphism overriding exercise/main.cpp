#include <assert.h>
#include <string>
using std::string;//Added this so I do not have to put std::string in 
//method return types and variable declarations.  

class Animal {
public:
  virtual std::string Talk() const = 0;
};

// TODO: Declare a class Dog that inherits from Animal
class Dog : public Animal
{
    public:
        string Talk() const override {return "Woof";}
};

int main() {
  Dog dog;
  assert(dog.Talk() == "Woof");
}
