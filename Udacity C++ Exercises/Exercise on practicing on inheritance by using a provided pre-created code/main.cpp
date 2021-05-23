#include <iostream>
#include <string>
using std::string;

class Vehicle {
public:
    int wheels = 0;
    string color = "blue";
    int age = 0;//Added this member variable to the parent class.  
    
    void Print() const
    {
        std::cout << "This " << color << " vehicle has " << wheels << " wheels, and is " << age << " years old!\n";
    }
};

class Car : public Vehicle {
public:
    bool sunroof = false;
};

class Bicycle : public Vehicle {
public:
    bool kickstand = true;
};

class Truck : public Vehicle //Added this child class.  
{
    public:
        bool loadedWithCargo = false;
};

int main() 
{
    Car car;
    car.wheels = 4;
    car.age = 5;//Initializing the member variable that I added to the parent class.  
    car.sunroof = true;
    car.Print();
    std::cout << "The car is " << car.age << " years old!  \n";//Directly printing out data of age.  
    if(car.sunroof)
        std::cout << "And a sunroof!\n";
    Truck truck;//Instantiating the child class that I created.   
    truck.wheels = 7;
    truck.age = 3;
    truck.loadedWithCargo = true;
    truck.Print();//Print out the Object that I created.  
    if(truck.loadedWithCargo)
        std::cout << "The truck has cargo!  \n";//Stating whether the Truck object that I created has been loaded with cargo or not.  
};
