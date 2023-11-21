
#ifndef SURA_H
#define SURA_H

#include "../JobPredefs.hpp"

class Sura : public Champion {

public:
	Sura(){
		this->setName("Sura");

		adjustStats(0,0,0,6,0,0);

        this->addSkill(new Skill("Dragon Combo", "Attack", 10));
        this->addSkill(new Skill("Gentle Touch - Cure", "Buff", 10));
        this->addSkill(new Skill("Cursed Circle", "Cursed Circle", 10));
        this->addSkill(new Skill("Near-Death Awaken", "Passive", 10));
        this->addSkill(new Skill("Fallen Empire", "Attack", 5));
        this->addSkill(new Skill("Transcendence", "Passive", 3));
        this->addSkill(new Skill("Gentle Touch - Silence", "Attack", 5));
        this->addSkill(new Skill("Tiger Cannon", "Attack", 10));
        this->addSkill(new Skill("Lion Howling", "Attack", 10));
        this->addSkill(new Skill("Gentle Touch - Revitalize", "Buff", 10));
        this->addSkill(new Skill("Rising Dragon", "Buff", 10));
        this->addSkill(new Skill("Hell Gate", "Attack", 15));
        this->addSkill(new Skill("Spirit Bomb Blast", "Attack", 5));
        this->addSkill(new Skill("Force Focus", "Passive", 20));
	};

    void initializeUpgrades();
};

#endif