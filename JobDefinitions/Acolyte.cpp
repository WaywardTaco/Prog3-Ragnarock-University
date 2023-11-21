
#ifndef ACOLYTE_H
#define ACOLYTE_H

#include "../JobPredefs.hpp"

class Acolyte : public Job {

public:
	Acolyte(){
		this->setName("Acolyte");

        setStats(6, 1, 6, 13, 8, 1);

        this->addSkill(new Skill("Heal", "Heal", 20));
        this->addSkill(new Skill("Holy Light Strike", "Attack", 10));
        this->addSkill(new Skill("Blessing", "Buff", 15));
        this->addSkill(new Skill("Ruwach", "Buff", 1));
        this->addSkill(new Skill("Light Shield", "Barrier", 5));
        this->addSkill(new Skill("Maces Mastery", "Passive", 20));
        this->addSkill(new Skill("Kyrie Eleison", "Buff", 20));
        this->addSkill(new Skill("Increase Agility", "Passive", 10));
	};

    void initializeUpgrades();
};

#endif