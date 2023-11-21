
#ifndef ROYAL_GUARD_H
#define ROYAL_GUARD_H

#include "../JobPredefs.hpp"

class RoyalGuard : public Paladin {

public:
	RoyalGuard(){
		this->setName("Royal Guard");

		adjustStats(0,0,6,0,0,0);

		this->addSkill(new Skill("Earth Drive", "Attack", 10));
		this->addSkill(new Skill("Piety", "Buff", 3));
		this->addSkill(new Skill("Spear Thrust", "Passive", 15));
		this->addSkill(new Skill("Prestige", "Passive", 5));
		this->addSkill(new Skill("Shield Of Defense", "Passive", 15));
		this->addSkill(new Skill("Discipline Of Justice", "Passive", 3));
		this->addSkill(new Skill("Battle Chant", "Buff", 15));
		this->addSkill(new Skill("Overbrand", "Attack", 10));
		this->addSkill(new Skill("Inspiration", "Buff", 10));
		this->addSkill(new Skill("Fearless", "Buff", 10));
		this->addSkill(new Skill("Command Of Charge", "Buff", 5));
		this->addSkill(new Skill("King's Guardian", "Buff", 5));
		this->addSkill(new Skill("Force Focus", "Passive", 20));
	};

    void initializeUpgrades();
};

#endif