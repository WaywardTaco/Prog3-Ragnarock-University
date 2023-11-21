
#ifndef SAGE_H
#define SAGE_H

#include "../JobPredefs.hpp"

class Sage : public Magician {

public:
	Sage(){
		this->setName("Sage");

        this->addSkill(new Skill("Free Cast", "Passive", 5));
        this->addSkill(new Skill("Spell Breaker", "Debuff", 10));
        this->addSkill(new Skill("Fire Field", "Element Trap", 10));
        this->addSkill(new Skill("Earthquake", "Attack", 10));
        this->addSkill(new Skill("Earth Field", "Element Trap", 5));
        this->addSkill(new Skill("Water Field", "Element Trap", 10));
        this->addSkill(new Skill("Auto Spell", "Passive", 20));
        this->addSkill(new Skill("Upgrade Book", "Passive", 20));
        this->addSkill(new Skill("Wind Field", "Element Trap", 5));
        this->addSkill(new Skill("Energy Coat", "Buff", 10));
	};

    void initializeUpgrades();
};

#endif