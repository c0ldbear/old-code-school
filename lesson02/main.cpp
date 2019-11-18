#include <iostream>

int Attack(int health, int damage)
{
    int result = health - damage;

    if (result <= 0)
    {
        result = 0;
    }

    return result;
}

int main()
{

    int playerHealth = 100;
    int playerDamage = 8;
    bool playerAlive = true;

    int enemyHealth = 50;
    int enemyDamage = 4;
    bool enemyAlive = true;

    playerHealth = Attack(playerHealth, enemyDamage);
    enemyHealth = Attack(enemyHealth, playerDamage);

    return 0;
}
