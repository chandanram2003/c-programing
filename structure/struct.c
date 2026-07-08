#include <stdio.h>
int main()
{
    struct pokemon
    {
        int hp;
        int speed;
        int attack;
    };
    struct pokemon pikachu;
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;

    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);
    // struct pokemon charizard;
    // charizard.attack = 130;
    // charizard.hp = 50;
    // charizard.speed = 100;
    // printf("%d", charizard.attack);
    return 0;
}