#include <iostream>
#include <string>
#include <assert.h>

class Animal {
public:
    double age;
};

class Pet {
public:
    std::string name;
};

// Dog derives from *both* Animal and Pet
class Dog : public Animal, public Pet {
public:
    std::string breed;
};

class Cat : public Animal, public Pet //Created this class as part of the exercise.  
{
    public:
        std::string color;
};

int main()
{
    Cat cat;//Added this.  
    cat.color = "black";//Added this.
    cat.age = 10;//Added this.
    cat.name = "Max";//Added this.  
    assert(cat.color == "black");
    assert(cat.age == 10);
    assert(cat.name == "Max");
}
