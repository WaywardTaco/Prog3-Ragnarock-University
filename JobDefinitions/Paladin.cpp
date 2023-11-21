
#ifndef PALADIN_H
#define PALADIN_H

#include "../JobPredefs.hpp"

class Paladin : public Crusader {

public:
	Paladin(){
		this->setName("Paladin");

		adjustStats(0,0,4,0,0,0);

		this->addSkill(new Skill("Grand Cross", "Attack", 10));
		this->addSkill(new Skill("Reflect Shield", "Buff", 10));
		this->addSkill(new Skill("Defending Aura", "Buff", 5));
		this->addSkill(new Skill("Sacrifice", "Buff", 15));
		this->addSkill(new Skill("Providence", "Buff", 10));
		this->addSkill(new Skill("Selfless Shield", "Lead Skill", 10));
		this->addSkill(new Skill("Retribution", "Passive", 20));
		this->addSkill(new Skill("Faith", "Passive", 10));
		this->addSkill(new Skill("Bliss", "Passive", 5));
		this->addSkill(new Skill("Shield Boomerang", "Attack", 15));
	};

    void initializeUpgrades();
};

#endif