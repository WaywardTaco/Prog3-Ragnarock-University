
#ifndef SNIPER_H
#define SNIPER_H

#include "../JobPredefs.hpp"

class Sniper : public Hunter {

public:
	Sniper(){
		this->setName("Sniper");

		adjustStats(0,0,0,0,4,0);

        this->addSkill(new Skill("Sharp Shooting", "Attack", 10));
        this->addSkill(new Skill("Multi Firing", "Attack", 20));
        this->addSkill(new Skill("Hunting Assault", "Summon", 10));
        this->addSkill(new Skill("Stun", "Passive", 5));
        this->addSkill(new Skill("Land Mine", "Trap Skill", 15));
        this->addSkill(new Skill("Sandman Trap", "Trap Skill", 5));
        this->addSkill(new Skill("Trap Research", "Passive", 10));
        this->addSkill(new Skill("Wind Walk", "Buff", 10));
        this->addSkill(new Skill("True Sight", "Buff", 10));
        this->addSkill(new Skill("Trump Tamer", "Passive", 15));
        this->addSkill(new Skill("Ferity Awakening", "Passive", 10));
	};

    void initializeUpgrades();
};

#endif