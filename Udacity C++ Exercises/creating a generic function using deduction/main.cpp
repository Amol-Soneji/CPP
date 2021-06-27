#include <assert.h>

// TODO: Declare a generic, templatized average function
template <typename numbs> numbs average(numbs a, numbs b)
{
    return ((a + b) / 2);
}

int main() { assert(average(2.0,5.0) == 3.5); }
