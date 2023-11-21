
#ifndef MONK_H
#define MONK_H

#include "../JobPredefs.hpp"

class Monk : public Acolyte {

public:
	Monk(){
		this->setName("Monk");

        this->addSkill(new Skill("Call Spirits", "Buff", 5));
        this->addSkill(new Skill("Critical Explosion", "Buff", 5));
        this->addSkill(new Skill("Chain Combo", "Attack", 5));
        this->addSkill(new Skill("Combo Finish", "Attack", 10));
        this->addSkill(new Skill("Asura Strike", "Attack", 10));
        this->addSkill(new Skill("Steel Body", "Buff", 5));
        this->addSkill(new Skill("Body Relocation", "Buff", 1));
        this->addSkill(new Skill("Investigate", "Attack", 10));
        this->addSkill(new Skill("Iron Fist", "Passive", 10));
        this->addSkill(new Skill("Spirits Recovery", "Passive", 5));
        this->addSkill(new Skill("Triple Attack", "Passive", 20));
        this->addSkill(new Skill("Flee", "Passive", 20));
        this->addSkill(new Skill("Zen", "Buff", 1));
	};

    void initializeUpgrades();
};

#endif