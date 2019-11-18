#include <iostream>

// Write a function that checks which integer is the biggest
int checkInt(int number_a, int number_b)
{
    int result = number_a;
    if (number_a < number_b)
    {
        result = number_b;
    }

    return result;
}
// Write a function that checks if a character is lowercase (use ascii table)

// Write a function that makes a character uppercase ONLY IF it is lowercase

int main()
{

    std::cout << checkInt(10,1) << std::endl;
    std::cout << checkInt(3,51) << std::endl;
    std::cout << checkInt(-5,-12) << std::endl;
    std::cout << checkInt(123,123) << std::endl;

    return 0;
}