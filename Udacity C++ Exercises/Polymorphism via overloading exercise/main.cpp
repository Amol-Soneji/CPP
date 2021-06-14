#include <iostream>
using std::cout;

class Human{};
class Robot{};
class Bunny{};

// TODO: Write hello() function
void hello()
{
    cout << "Hello, World! \n";
}
// TODO: Overload hello() three times

void hello(Human human)
{
    cout << "Hello, Human! \n";
}

void hello(Robot robot)
{
    cout << "Hello, Robot! \n";
}

void hello(Bunny bunny)
{
    cout << "Hello, Bunny! \n";
}

// TODO: Call hello() from main()
int main()
{
    hello();
    hello(Human());
    hello(Robot());
    hello(Bunny());
}
