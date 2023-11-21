
#ifndef CHAMPION_H
#define CHAMPION_H

#include "../JobPredefs.hpp"

class Champion : public Monk {

public:
	Champion(){
		this->setName("Champion");

		adjustStats(0,0,0,4,0,0);

        this->addSkill(new Skill("Tiger Knuckle Fist", "Attack", 5));
        this->addSkill(new Skill("Chain Crush Combo", "Attack", 15));
        this->addSkill(new Skill("Ki Explosion", "Attack", 5));
        this->addSkill(new Skill("Palm Push Strike", "Attack", 5));
        this->addSkill(new Skill("Blade Stop", "Sword Break", 5));
        this->addSkill(new Skill("Finger Offensive", "Attack", 10));
        this->addSkill(new Skill("Spirit Bomb Refining", "Passive", 10));
        this->addSkill(new Skill("Fist Refining", "Passive", 5));
        this->addSkill(new Skill("Preemptive Strike", "Passive", 10));
        this->addSkill(new Skill("Critical Explosion - Break", "Passive", 10));
	};

    void initializeUpgrades();
};

#endif