
#ifndef KNIGHT_H
#define KNIGHT_H

#include "../JobPredefs.hpp"

class Knight : public Swordsman {

public:
    Knight(){
        this->setName("Knight");

        this->addSkill(new Skill("Bowling Bash", "Attack", 20));
        this->addSkill(new Skill("Pierce", "Attack", 20));
        this->addSkill(new Skill("One-Hand Quicken", "Buff", 20));
        this->addSkill(new Skill("Brandish Spear", "Attack", 10));
        this->addSkill(new Skill("Cavalry Combat", "Passive", 5));
        this->addSkill(new Skill("Cavalry Mastery", "Passive", 5));
        this->addSkill(new Skill("Spear Mastery", "Passive", 20));
        this->addSkill(new Skill("Aura Blade", "Passive", 20));
        this->addSkill(new Skill("Counter Attack", "Beat Back", 5));
        this->addSkill(new Skill("Heart Of Steel", "Buff", 5));
    }

    void initializeUpgrades();
};

#endif