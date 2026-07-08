#include <stdio.h>
int main()
{
    typedef struct pokemon
    {
        int attack;
        int hp;
        int speed;
        char tier;
    } pokemon;
    pokemon arr[10];
    arr[0].attack = 50;
    arr[0].hp = 100;
    arr[0].speed = 30;
    arr[0].tier = 'A';

    arr[1].attack = 40;
    arr[1].hp  = 200;
    arr[1].speed = 20;
    arr[1].tier = 'A';

    arr[2].attack = 70;
    arr[2].hp = 100;
    arr[2].speed = 0;
    arr[2].tier = 'A';
    for ( int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[0].attack);
        printf("%d\n", arr[0].hp);
        printf("%d\n", arr[0].speed);
        printf("%c\n", arr[0].tier);
    }
}