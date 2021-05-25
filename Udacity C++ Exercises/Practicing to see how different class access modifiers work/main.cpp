// This example demonstrates the privacy levels
// between parent and child classes
#include <iostream>
#include <string>
using std::string;

class Vehicle {
public:
    int wheels = 0;
    string color = "blue";
    
    void Print() const
    {
        std::cout << "This " << color << " vehicle has " << wheels << " wheels!\n";
    }
};

class Car : protected Vehicle {//Changed to protected access specifier.  
public:
    bool sunroof = false;
    void terminalOutput()
    {
        wheels = 4;
        Print();
    }
};

class Bicycle : private Vehicle {//Changed to private access specifier.  
public:
    bool kickstand = true;
    void terminalOutput()
    {
        wheels = 2;
        Print();
    }
};

class Scooter : public Vehicle {
public:
    bool electric = false;
};

int main() 
{
    Car car;
    Bicycle bicycle;
    Scooter scooter;
    //car.Print();//Not possible if the Car class does not have it's own Print function.  
    //bicycle.Print();//Not possible if the Bicycle class does not have it's own Print function.
    car.terminalOutput();//Does work if Print function of parent class is called within the Car class.  
    bicycle.terminalOutput();//Does work if Print function of parent class is called within the Bicycle class.  
};
