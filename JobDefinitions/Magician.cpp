
#ifndef MAGICIAN_H
#define MAGICIAN_H

#include "../JobPredefs.hpp"

class Magician : public Job {

public:
	Magician(){
		this->setName("Magician");

        adjustStats(1, 1, 3, 18, 11, 1);

        this->addSkill(new Skill("Cold Bolt", "Attack", 15));
        this->addSkill(new Skill("Ring Of Fire", "Attack", 10));
        this->addSkill(new Skill("Soul Strike", "Attack", 10));
        this->addSkill(new Skill("Frost Diver", "Attack", 10));
        this->addSkill(new Skill("Fire Bolt", "Attack", 15));
        this->addSkill(new Skill("Lightning Bolt", "Attack", 15));
        this->addSkill(new Skill("Increase Spiritual Recovery", "Passive", 10));
	};

    void initializeUpgrades();
};

#endif