#include <stdio.h>
int main()
{
    struct pokemon
    { /// user defined data types
        int hp;
        int speed;
        int attack;
        char tier; // S A B C D
    } pikachu, charizard, newtwo;
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    printf("%d", pikachu.hp);
    printf("\n");
    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;
    charizard.tier = 'S';
    printf("%d", charizard.hp);
    printf("\n");
    newtwo.attack = 170;
    newtwo.hp = 150;
    newtwo.speed = 200;
    newtwo.tier = 'G';
    printf("%c", newtwo.tier);

    return 0;
}