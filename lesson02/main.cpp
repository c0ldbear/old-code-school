#include <iostream>

int add(int number_a, int number_b);

int main()
{

    std::cout << add(5,10) << std::endl;

    return 0;
}

int add(int number_a, int number_b)
{
    int result = number_a + number_b;

    return result;
}