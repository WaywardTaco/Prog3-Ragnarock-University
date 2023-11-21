
#ifndef SCHOLAR_H
#define SCHOLAR_H

#include "../JobPredefs.hpp"

class Scholar : public Sage {

public:
	Scholar(){
		this->setName("Scholar");

		adjustStats(0,0,0,0,4,0);

        this->addSkill(new Skill("Quick Casting", "Passive", 5));
        this->addSkill(new Skill("Flammable Net", "Debuff", 5));
        this->addSkill(new Skill("Double Flurry", "Passive", 15));
        this->addSkill(new Skill("HP Conversion", "Buff", 5));
        this->addSkill(new Skill("Soul Change", "Buff", 10));
        this->addSkill(new Skill("Mental Agitation", "Passive", 15));
        this->addSkill(new Skill("Soul Siphon", "Attack", 20));
        this->addSkill(new Skill("Safety Wall", "Barrier", 10));
        this->addSkill(new Skill("Magic Rod", "Buff", 5));
        this->addSkill(new Skill("Remove Buff", "Buff", 10));
	};

    void initializeUpgrades();
};

#endif