
#ifndef HUNTER_H
#define HUNTER_H

#include "../JobPredefs.hpp"

class Hunter : public Archer {

public:
	Hunter(){
		this->setName("Hunter");

        this->addSkill(new Skill("Blitz Beat", "Passive", 20));
        this->addSkill(new Skill("Beastmastery", "Passive", 20));
        this->addSkill(new Skill("Falcon Assault", "Summon", 5));
        this->addSkill(new Skill("Splitting Arrows", "Attack", 10));
        this->addSkill(new Skill("Heavy Arrow", "Attack", 10));
        this->addSkill(new Skill("Frost Trap", "Trap Skill", 5));
        this->addSkill(new Skill("Claymore Trap", "Trap Skill", 10));
        this->addSkill(new Skill("Detonator", "Trigger Trap", 8));
        this->addSkill(new Skill("Lightning Arrow", "Buff", 3));
        this->addSkill(new Skill("Improve Concentration", "Passive", 20));
	};

    void initializeUpgrades();
};

#endif