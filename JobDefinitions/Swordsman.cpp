
#ifndef SWORDSMAN_H
#define SWORDSMAN_H

#include "../JobPredefs.hpp"

class Swordsman : public Job {

public:
    Swordsman(){
        this->setName("Swordsman");

        adjustStats(11, 3, 13, 1, 6, 1);

        this->addSkill(new Skill("Endure", "Buff", 10));
        this->addSkill(new Skill("Bash", "Attack", 20));
        this->addSkill(new Skill("Magnum Break", "Attack", 10));
        this->addSkill(new Skill("Taunt", "Debuff", 10));
        this->addSkill(new Skill("Sword Mastery", "Passive", 10));
        this->addSkill(new Skill("Increase Recuperation Power", "Passive", 15));
    }

    void initializeUpgrades();

};

#endif