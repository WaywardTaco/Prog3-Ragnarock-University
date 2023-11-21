
#ifndef PRIEST_H
#define PRIEST_H

#include "../JobPredefs.hpp"

class Priest : public Acolyte {

public:
	Priest(){
		this->setName("Priest");

        this->addSkill(new Skill("Sanctuary", "Heal", 20));
        this->addSkill(new Skill("Magnificat", "Buff", 5));
        this->addSkill(new Skill("Clearance", "Buff", 5));
        this->addSkill(new Skill("Aspersio", "Buff", 2));
        this->addSkill(new Skill("Gloria", "Buff", 5));
        this->addSkill(new Skill("Increase Spiritual Recovery", "Passive", 10));
        this->addSkill(new Skill("Magnus Exorcismus", "Attack", 20));
        this->addSkill(new Skill("Turn Undead", "Attack", 20));
        this->addSkill(new Skill("Resurrection", "Reborn", 4));
        this->addSkill(new Skill("Impositio Manus", "Buff", 10));
        this->addSkill(new Skill("Holy Booster", "Passive", 5));
	};

    void initializeUpgrades();
};

#endif