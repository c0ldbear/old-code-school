#include <iostream>

// Write a function that checks which integer is the biggest
int CheckInt(int number_a, int number_b)
{
    int result = number_a;
    if (number_a < number_b)
    {
        result = number_b;
    }

    return result;
}

void TestCheckInt()
{
    std::cout << CheckInt(10,1) << std::endl;
    std::cout << CheckInt(3,51) << std::endl;
    std::cout << CheckInt(-5,-12) << std::endl;
    std::cout << CheckInt(123,123) << std::endl;
    std::cout << CheckInt('a','b') << std::endl;
}

// Write a function that checks if a character is lowercase (use ascii table)
bool IsLowercase(char character)
{
    if (character >= 'a' && character <= 'z')
    {
        return true;
    }

    return false;
}

void TestIsLowercase()
{
    std::cout << "a : " << IsLowercase('a') << std::endl;
    std::cout << "z : " << IsLowercase('z') << std::endl;
    std::cout << "A : " << IsLowercase('A') << std::endl;
    std::cout << "Z : " << IsLowercase('Z') << std::endl;
}

// Write a function that makes a character uppercase ONLY IF it is lowercase
char MakeUppercase(char character)
{
    if (IsLowercase(character))
    {
        return character - 32;
    }

    return character;
}

void TestMakeUppercase()
{
    std::cout << "a : " << MakeUppercase('a') << std::endl;
    std::cout << "b : " << MakeUppercase('b') << std::endl;
    std::cout << "z : " << MakeUppercase('z') << std::endl;
    std::cout << "A : " << MakeUppercase('A') << std::endl;
    std::cout << "Z : " << MakeUppercase('Z') << std::endl;

}


int main()
{
    //TestCheckInt();
    //TestIsLowercase();
    TestMakeUppercase();

    return 0;
}