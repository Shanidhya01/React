#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon{
       int hp;
       int speed;
       int attack;
       char tier;
       char name[15];
    } pokemon;
     typedef struct legendaypokemon{
       pokemon normal;
       char ability[100];
    } legendarypokemon;
    typedef struct godpokemon{
        legendarypokemon legend;
        int specialattack;
    } godpokemon;

    godpokemon arceus;
    arceus.specialattack =300;
    strcpy(arceus.legend.ability,"Turns into stone");
    arceus.legend.normal.attack = 500;

    legendarypokemon newtwo;
    strcpy(newtwo.ability,"Pressure");
    newtwo.normal.attack=100;
    newtwo.normal.hp=150;
    newtwo.normal.attack=180;
    strcpy(newtwo.normal.name,"NEWTWO");
    newtwo.normal.speed=200;
    newtwo.normal.tier='S';
    return 0;
}