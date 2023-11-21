
#ifndef WHITESMITH_H
#define WHITESMITH_H

#include "../JobPredefs.hpp"

class Whitesmith : public Blacksmith {

public:
	Whitesmith(){
		this->setName("Whitesmith");

		adjustStats(0,0,0,0,0,4);

        this->addSkill(new Skill("Side Split", "Attack", 10));
        this->addSkill(new Skill("Cart Termination", "Summon", 10));
        this->addSkill(new Skill("Cart Boost", "Buff", 1));
        this->addSkill(new Skill("Meltdown", "Buff", 20));
        this->addSkill(new Skill("Elite Alloy Craft", "Function", 10));
        this->addSkill(new Skill("Human's Heart Light", "Passive", 15));
        this->addSkill(new Skill("Greed", "Passive", 10));
        this->addSkill(new Skill("Manufacturing Master", "Passive", 10));
        this->addSkill(new Skill("Overthrust Max", "Buff", 5));
        this->addSkill(new Skill("Trading Master", "Fucntion", 5));
        this->addSkill(new Skill("Repair Weapon", "Buff", 1));
	};

    void initializeUpgrades();
};

#endif