#include <string>
#include <iostream>

using std::string;
using std::cout;

// Define base class Animal
class Animal
{
    public:
        string color {""};
        string name {""};
        int age {0};
};

// Declare derived class Snake
class Snake : public Animal
{
    public:
        int length {0};
        void MakeSound()
        {
            cout << "The " << color << " colored snake named " << name << ", and is " 
            << length <<" inches makes the following sound.  \n";
            cout << "Hissss.  \n";
        }
};

// Declare derived class Cat
class Cat : public Animal
{
    public:
        int height{0};
        void MakeSound()
        {
            cout << "The " << color << " colored cat named " << name << ", and is " 
            << height << " inches tall makes the following sound.  \n";
            cout << "Meow.  \n";
        }
};

// Test in main()

int main()
{
    Snake snake;
    Cat cat;
    snake.color = "green";
    snake.name = "Jhon";
    snake.age = 9;
    snake.length = 8;
    snake.MakeSound();
    cat.color = "black";
    cat.name = "Blake";
    cat.age = 4;
    cat.height = 5;
    cat.MakeSound();
}
