#include <iostream>

int main()
{

    int playerHealth = 100;
    int playerDamage = 8;
    bool playerAlive = true;

    int enemyHealth = 50;
    int enemyDamage = 4;
    bool enemyAlive = true;

    playerHealth = playerHealth - enemyDamage;
    if (playerHealth <= 0)
    {
        playerHealth = 0;
        playerAlive = false;
    }

    enemyHealth = enemyHealth - playerDamage;
    if (enemyHealth <= 0)
    {
        enemyHealth = 0;
        enemyAlive = false;
    }

    return 0;
}
