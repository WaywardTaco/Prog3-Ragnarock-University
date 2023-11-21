
#ifndef WIZARD_H
#define WIZARD_H

#include "../JobPredefs.hpp"

class Wizard : public Magician {

public:
	Wizard(){
		this->setName("Wizard");

        this->addSkill(new Skill("Sight", "Buff", 1));
        this->addSkill(new Skill("Energy Coat", "Buff", 10));
        this->addSkill(new Skill("Storm Gust", "Attack", 20));
        this->addSkill(new Skill("Lord Of Vermilion", "Attack", 20));
        this->addSkill(new Skill("Jupitel Thunder", "Attack", 10));
        this->addSkill(new Skill("Sightrasher", "Attack", 10));
        this->addSkill(new Skill("Magic Crasher", "Attack", 5));
        this->addSkill(new Skill("Heaven's Drive", "Attack", 20));
        this->addSkill(new Skill("Fire Ball", "Attack", 10));
        this->addSkill(new Skill("Soul Drain", "Passive", 10));
	};

    void initializeUpgrades();
};

#endif