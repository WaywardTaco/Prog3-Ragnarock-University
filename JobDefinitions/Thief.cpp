
#ifndef THIEF_H
#define THIEF_H

#include "../JobPredefs.hpp"

class Thief : public Job {

public:
	Thief(){
		this->setName("Thief");

		setStats(8, 16, 1, 1, 3, 6);

        this->addSkill(new Skill("Strong Blade Attack", "Attack", 10));
        this->addSkill(new Skill("Double Attack", "Passive", 20));
        this->addSkill(new Skill("Improve Flee", "Passive", 15));
        this->addSkill(new Skill("Hiding", "Buff", 10));
        this->addSkill(new Skill("Ambush", "Attack", 10));
        this->addSkill(new Skill("Enchant Poison", "Buff", 10));
        this->addSkill(new Skill("Venom Knife", "Attack", 10));
        this->addSkill(new Skill("Detoxify", "Buff", 1));
	};

    void initializeUpgrades();
};

#endif