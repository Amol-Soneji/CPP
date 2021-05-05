#include <string>
#include <cstring>
#include <iostream>

class Car {
    // TODO: Declare private attributes
    private:
        int horsepower;
        int weight;
        char* brand {""};
    // TODO: Declare getter and setter for brand
    public:
        void SetHorsepower(int hp);
        void SetWeight(int kg);
        void SetBrand(std::string name);
        int GetHorsepower();
        int GetWeight();
        std::string GetBrand();
};

// Define setters
void Car::SetHorsepower(int hp)
{
    Car::horsepower = hp;
}
void Car::SetWeight(int kg)
{
    Car::weight = kg;
}
void Car::SetBrand(std::string name)
{
    Car::brand = &(name[0]);
}

// Define getters
int Car::GetHorsepower(){return Car::horsepower;}
int Car::GetWeight(){return Car::weight;}
std::string Car::GetBrand()
{
    std::string name(Car::brand);
    return name;
}

// Test in main()
int main() 
{
    Car car;
    car.SetBrand("Peugeot");
    std::cout << car.GetBrand() << "\n";   
}
