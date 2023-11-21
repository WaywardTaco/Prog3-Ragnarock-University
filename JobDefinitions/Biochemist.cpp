
#ifndef BIOCHEMIST_H
#define BIOCHEMIST_H

#include "../JobPredefs.hpp"

class Biochemist : public Alchemist {

public:
	Biochemist(){
		this->setName("Biochemist");

		adjustStats(4,0,0,0,0,0);

        this->addSkill(new Skill("Improved Acid Demonstration", "Attack", 20));
        this->addSkill(new Skill("HP Potion Cast", "Buff", 10));
        this->addSkill(new Skill("MP Potion Cast", "Buff", 1));
        this->addSkill(new Skill("Powerful Acid Demonstration", "Passive", 5));
        this->addSkill(new Skill("Hell Plant", "Hell Plant", 10));
        this->addSkill(new Skill("Super Life Psychic", "Passive", 5));
        this->addSkill(new Skill("Homunculus Strength II", "Passive", 10));
        this->addSkill(new Skill("Chemical Protection Weapon", "Buff", 3));
        this->addSkill(new Skill("Chemical Protection Armor", "Passive", 3));
        this->addSkill(new Skill("Gene Research", "Passive", 10));
        this->addSkill(new Skill("Chemical Weapon Destruction", "Passive", 15));
        this->addSkill(new Skill("Chemical Helm Destruction", "Passive", 3));
        this->addSkill(new Skill("Chemical Shield Destruction", "Passive", 3));
	};

    void initializeUpgrades();
};

#endif