
#ifndef GYPSY_H
#define GYPSY_H

#include "../JobPredefs.hpp"

class Gypsy : public Dancer {

public:
	Gypsy(){
		this->setName("Gypsy");

		adjustStats(0,4,0,0,0,0);

        this->addSkill(new Skill("The Catalyst", "Ensemble", 6));
        this->addSkill(new Skill("Arrow Vulcan", "Attack", 20));
        this->addSkill(new Skill("Undying Siegfried", "Ensemble", 15));
        this->addSkill(new Skill("Proficient Dancing", "Passive", 15));
        this->addSkill(new Skill("Nibelungen Ring", "Ensemble", 10));
        this->addSkill(new Skill("Puppeteer's Trick", "Buff", 15));
        this->addSkill(new Skill("The Goddess Kiss", "Solo", 10));
        this->addSkill(new Skill("Rocky's Sorrow", "Ensemble", 1));
        this->addSkill(new Skill("Encore", "Passive", 5));
        this->addSkill(new Skill("Don't Hold Me Back", "Passive", 5));
	};

    void initializeUpgrades();
};

#endif