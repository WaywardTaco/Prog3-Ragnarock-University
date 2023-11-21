
#ifndef CRUSADER_H
#define CRUSADER_H

#include "../JobPredefs.hpp"

class Crusader : public Swordsman {

public:
	Crusader(){
		this->setName("Crusader");

		this->addSkill(new Skill("Spear Quicken", "Buff", 20));
		this->addSkill(new Skill("Devotion", "Buff", 5));
		this->addSkill(new Skill("Holy Cross", "Attack", 20));
		this->addSkill(new Skill("Shield Charge", "Attack", 5));
		this->addSkill(new Skill("Auto Guard", "Buff", 10));
		this->addSkill(new Skill("Spear Mastery", "Passive", 20));
		this->addSkill(new Skill("Heal", "Heal", 20));
		this->addSkill(new Skill("Cavalry Combat", "Paassive", 5));
		this->addSkill(new Skill("Cavalry Mastery", "Passive", 5));
		this->addSkill(new Skill("Divine Protection", "Passive", 20));
		this->addSkill(new Skill("Shield Chain", "Attack", 20));
	};

	void initializeUpgrades();

};

#endif