
#ifndef STALKER_H
#define STALKER_H

#include "../JobPredefs.hpp"

class Stalker : public Rogue {

public:
	Stalker(){
		this->setName("Stalker");

		adjustStats(0,0,0,0,0,4);

        this->addSkill(new Skill("Snatcher", "Passive", 10));
        this->addSkill(new Skill("Triangle Shot", "Attack", 20));
        this->addSkill(new Skill("Rogue's Nature", "Attack", 20));
        this->addSkill(new Skill("Intimidate", "Seize", 10));
        this->addSkill(new Skill("State Pursuit", "Passive", 10));
        this->addSkill(new Skill("Vanished", "Buff", 5));
        this->addSkill(new Skill("Close Confine", "Control", 5));
        this->addSkill(new Skill("Disabling Strike", "Attack", 5));
        this->addSkill(new Skill("Strip Accessory", "Debuff", 6));
        this->addSkill(new Skill("Double Accessory Removal", "Passive", 3));
        this->addSkill(new Skill("Strip Weapon", "Passive", 3));
        this->addSkill(new Skill("Strip Shield", "Debuff", 6));
        this->addSkill(new Skill("Strip Boots", "Passive", 3));
        this->addSkill(new Skill("Strip Helm", "Passive", 3));
        this->addSkill(new Skill("Strip Armor", "Passive", 3));
	};

    void initializeUpgrades();
};

#endif