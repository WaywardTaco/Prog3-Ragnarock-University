
#ifndef ARCHER_H
#define ARCHER_H

#include "../JobPredefs.hpp"

class Archer : public Job {

public:
	Archer(){
		this->setName("Archer");

		adjustStats(1, 8, 3, 3, 16, 3);

        this->addSkill(new Skill("Double Strafe", "Attack", 10));
        this->addSkill(new Skill("Arrow Shower", "Attack", 20));
        this->addSkill(new Skill("Arrow Repel", "Attack", 5));
        this->addSkill(new Skill("Ankle Snare", "Trap Skill", 10));
        this->addSkill(new Skill("Owl's Eye", "Passive", 10));
        this->addSkill(new Skill("Vulture's Eye", "Passive", 20));
        this->addSkill(new Skill("Elemental Arrow", "Passive", 20));
	};

    void initializeUpgrades();
};

#endif