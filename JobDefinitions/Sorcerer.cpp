
#ifndef SORCERER_H
#define SORCERER_H

#include "../JobPredefs.hpp"

class Sorcerer : public Scholar {

public:
	Sorcerer(){
		this->setName("Sorcerer");

		adjustStats(0,0,0,0,6,0);

        this->addSkill(new Skill("Sharpen Weapon", "Passive", 10));
        this->addSkill(new Skill("Summon Elemental", "Summon Element", 10));
        this->addSkill(new Skill("Commune Elements", "Passive", 5));
        this->addSkill(new Skill("Magic Fist", "Buff", 10));
        this->addSkill(new Skill("Mental Blast", "Attack", 10));
        this->addSkill(new Skill("Earth Grave", "Attack", 10));
        this->addSkill(new Skill("Varetyr Spear", "Attack", 20));
        this->addSkill(new Skill("Arrullo", "Debuff", 5));
        this->addSkill(new Skill("Warm Breeze", "Buff", 5));
        this->addSkill(new Skill("Diamond Dust", "Attack", 20));
        this->addSkill(new Skill("Force Focus", "Passive", 20));
	};

    void initializeUpgrades();
};

#endif