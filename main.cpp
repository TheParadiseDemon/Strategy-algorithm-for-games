#include <bits/stdc++.h>
#include "Strategy.h"
//Герой
//Две стратегии: защита и атака
//Атака тратит выносливость
//Если выносливость меньше какого-то значения, то переключить на защиту
//Защита даёт выносливость
//Исключить условный выбор и множественный выбор

class Creature;

class Strategy{
public:
    virtual void Action(Creature* creature) = 0;
};

class Defence : public Strategy{
public:
    void Action(Creature* &creature, Creature* enemy){

    }
};

class Attack : public Strategy{

};

class Regenaration : public Strategy{

};

class Creature{
public:
    Strategy* strategy = nullptr;
    int Health = 100;
    int Stamina = 100;
};

class Enemy : public Creature{
public:

};

class Hero : public Creature{
public:
    void Battle(Creature* enemy){
        strategy->Action(this, enemy);
    }

};

int main() {

    Hero h;
    Attack attack;
    Defence defence;
#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"
    while (true) {
        h.SetStrategy(&attack);
        h.Action();

        h.SetStrategy(&defence);
        h.Action();
    }
#pragma clang diagnostic pop

}
