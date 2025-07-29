#include <stdio.h>
#include <string.h>
typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon;
void change(pokemon *p)
{

    // (*p).hp=70;
    p->hp = 70;
    p->attack = 140;
    p->speed = 110;
    p->tier = 'A';
    strcpy(p->name, "Pickachu");
}

int main()
{
    pokemon pikachu = {60,70,100,'A',"Pikachu"};
    // pikachu.hp = 60;
    // pikachu.attack = 70;
    // pikachu.speed = 100;
    // pikachu.tier = 'A';
    // strcpy(pikachu.name, "Pickachu");
    pokemon *x = &pikachu;
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);
    printf("%d\n", pikachu.tier);
    printf("%s\n", pikachu.name);
    printf("\n\n\n");

    change(&pikachu);
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);
    printf("%d\n", pikachu.tier);
    printf("%s\n", pikachu.name);

    return 0;
}