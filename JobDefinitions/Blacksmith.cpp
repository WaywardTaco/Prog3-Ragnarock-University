
#ifndef BLACKSMITH_H
#define BLACKSMITH_H

#include "../JobPredefs.hpp"

class Blacksmith : public Merchant {

public:
	Blacksmith(){
		this->setName("Blacksmith");

        this->addSkill(new Skill("Weapon Perfection", "Buff", 10));
        this->addSkill(new Skill("Adrenaline Rush", "Buff", 20));
        this->addSkill(new Skill("Over Thrust", "Buff", 5));
        this->addSkill(new Skill("Hammerfall", "Attack", 5));
        this->addSkill(new Skill("Skin Tempering", "Passive", 10));
        this->addSkill(new Skill("Weaponry Research", "Passive", 10));
        this->addSkill(new Skill("Cart Revolution", "Summon", 3));
        this->addSkill(new Skill("Weapon Making", "Function", 10));
        this->addSkill(new Skill("Enchanted Stone Craft", "Function", 10));
        this->addSkill(new Skill("Orideocon Research", "Passive", 10));
        this->addSkill(new Skill("Improper Means", "Passive", 10));
        this->addSkill(new Skill("Skin A Flint", "Passive", 5));
        this->addSkill(new Skill("Refining Expert", "Passive", 10));
	};

    void initializeUpgrades();
};

#endif